#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "sweetie.h"
#include "font.h"
#include "bitmap.h"
#include "color.h"
#include "levels.h"
#include "function.h"
#include "GameState.h"



typedef unsigned char      uint8;
typedef unsigned short     uint16;
typedef unsigned int       uint32;

#define REG_DISPLAYCONTROL *((volatile uint32*)(0x04000000))
#define VIDEOMODE_3         0x0003
#define BGMODE_2            0x0400

#define SCREEN ((volatile uint16*)0x06000000)
#define SCREEN_W            240
#define SCREEN_H            160

#define SCREEN_S (SCREEN_W*SCREEN_H)

volatile unsigned short* buttons = (volatile unsigned short*) 0x04000130;

#define BUTTON_A (1 << 0)
#define BUTTON_B (1 << 1)
#define BUTTON_SELECT (1 << 2)
#define BUTTON_START (1 << 3)
#define BUTTON_RIGHT (1 << 4)
#define BUTTON_LEFT (1 << 5)
#define BUTTON_UP (1 << 6)
#define BUTTON_DOWN (1 << 7)
#define BUTTON_R (1 << 8)
#define BUTTON_L (1 << 9)

unsigned char button_pressed(unsigned short button) {
  unsigned short pressed = *buttons & button;
  if (pressed == 0) {
    return 1;
  } else {
    return 0;
  }
}

#define REG_VCOUNT (* (volatile uint16*) 0x04000006)
void vsync(void) {
  while (REG_VCOUNT >= 160);
  while (REG_VCOUNT < 160);
}

uint16 rgb16(uint8 red, uint8 green, uint8 blue) {
  return (red & 0x1F) | (green & 0x1F) << 5 | (blue & 0x1F) << 10;
}

uint16 clr(uint8 c) {
  return rgb16(
    sweetie_palette[c*3+0],
    sweetie_palette[c*3+1],
    sweetie_palette[c*3+2]
  );
}

void pset(volatile uint16* srf,uint8 x,uint8 y,uint16 c) {
  srf[y*SCREEN_W+x]=c;
}

uint16 pget(volatile uint16* srf,uint8 x,uint8 y) {
  return srf[y*SCREEN_W+x];
}

void frect(volatile uint16* srf,uint8 x,uint8 y,uint8 w,uint8 h,uint16 c) {
    for (int j = 0; j < h; ++j) {
        for (int i = 0; i < w; ++i) {
          pset(srf,x+i,y+j,c);
        }
    }
}

void drect(volatile uint16* srf,uint8 x,uint8 y,uint8 w,uint8 h,uint16 c) {
  for(int i=x;i<x+w;i++) {
    pset(srf,i,y,c);
    pset(srf,i,y+h-1,c);    
  }
  for(int j=y;j<y+h;j++) {
    pset(srf,x,j,c);
    pset(srf,x+h-1,j,c);    
  }
}

void dbmp(volatile uint16* srf,uint8* bmp,uint8 w,uint8 h,uint8 x,uint8 y,uint8 t,uint8 f) {
  for(int j=0;j<h;j++) {
    for(int i=0;i<w;i++) {
      int k=bmp[i+j*w+f*w*h];
      if(k!=t) {
        pset(srf,x+i,y+j,clr(k));    
      }
    }    
  }
}

void dchr(volatile uint16* srf,uint8* fnt,uint8 w,uint8 h,uint8 x,uint8 y,uint8 s,uint16 c,uint8 f) {
  for(int j=0;j<h;j++) {
    for(int i=0;i<w;i++) {
      int k=fnt[i+j*w+f*w*h];
      if(k!=0) {
        frect(srf,x+i*s,y+j*s,s,s,c);    
      }
    }    
  }
}

int indexOf(char* l,uint8 c) {
  int j=-1;
  for(int i=0;l[i];i++) {
    if(l[i]==c) {
      j=i;
      break;
    }
  }
  return j;
}

void dtxt(volatile uint16* srf,uint8* fnt,uint8 w,uint8 h,uint8 x,uint8 y,uint8 s,uint16 c,char* txt) {
  char* l="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int xc=x,yc=y;
  for(int i=0;txt[i];i++) {
    int j=indexOf(l,txt[i]);
    if(j!=-1) {
      dchr(srf,fnt,w,h,xc,yc,s,c,j);
    }
    xc+=w*s;
    if(xc+w*s>=SCREEN_W) {
      yc+=h*s;
      if(yc+h*s>=SCREEN_H) break;
    }
  }
}

void bget(volatile uint16 *srf,uint8 x,uint8 y,uint8 w,uint8 h) {
  for(int j=0;j<h;j++) {
    for(int i=0;i<w;i++) {
      srf[i+j*w]=pget(SCREEN,x+i,y+j);
    }
  }  
}

void bput(volatile uint16* srf,uint8 x,uint8 y,uint8 w,uint8 h) {
  for(int j=0;j<h;j++) {
    for(int i=0;i<w;i++) {
      pset(SCREEN,x+i,y+j,srf[i+j*w]);
    }
  }
}

int sgn(int x) {
  return x<0?-1:x>0?1:0;
}

int main() {

  REG_DISPLAYCONTROL = VIDEOMODE_3 | BGMODE_2;

  uint16 seed=0;

  GameState gameState=GAMESTATE_INIT;

  int levelNumber=0;

  int d=40000;

  int fx=0,fy=0;
  int pfx=0,pfy=0;

  int fcd=0,fcc=0;
  bool fkh=false;

  volatile uint16 b[bitmap_width*bitmap_height];

  

  frect(SCREEN,0,0,SCREEN_W,SCREEN_H,clr(0));

  dtxt(SCREEN,font_pixels,font_width,font_height,0,0,1,clr(12),"PRESS START BUTTON");

  while(!button_pressed(BUTTON_START)) seed++;
  srand(seed);

  while(1) {

    switch(gameState) {

    case GAMESTATE_INIT: gameState=GAMESTATE_START; break;

    case GAMESTATE_START: gameState=GAMESTATE_RUN; break;
    
    case GAMESTATE_RUN: 

      {

        frect(SCREEN,0,0,SCREEN_W,SCREEN_H,clr(0));

        int levelNumber=0;
        for(int j=0;j<LEVEL_HEIGHT;j++) {
          for(int i=0;i<LEVEL_WIDTH;i++) {
            int k=i+j*LEVEL_WIDTH;
            int l=levels[levelNumber].m[k];
            Color c=COLOR_NONE;

            switch(l & 0x0E) {
              case 2: c=COLOR_GRAY; break;
              case 4: c=COLOR_RED; break;
              case 6: c=COLOR_GREEN; break;
              case 8: c=COLOR_BLUE; break;
            }

            if(c!=0) {
              dbmp(SCREEN,bitmap_pixels,bitmap_width,bitmap_height,i*bitmap_width,j*bitmap_height,15,20+c-1);
            }

            if(l & 0x01) {
              dbmp(SCREEN,bitmap_pixels,bitmap_width,bitmap_height,i*bitmap_width,j*bitmap_height,15,28);
            } 

          }     
        }

        int h=0;
        switch(levels[levelNumber].r.d) {
          case DIRECTION_NORTH: h=0; break;
          case DIRECTION_EAST: h=1; break;
          case DIRECTION_SOUTH: h=2; break;
          case DIRECTION_WEST: h=3; break;
        }

        int x=levels[levelNumber].r.x;
        int y=levels[levelNumber].r.y;
              
        dbmp(SCREEN,bitmap_pixels,bitmap_width,bitmap_height,x*bitmap_width,y*bitmap_height,15,24+h); 

        while(!button_pressed(BUTTON_SELECT));

        gameState=GAMESTATE_CODE;

      }
    
      break;

    case GAMESTATE_CODE:

      frect(SCREEN,0,0,SCREEN_W,SCREEN_H,clr(0));

      for(int j=0;j<10;j++) {
        dbmp(SCREEN,bitmap_pixels,bitmap_width,bitmap_height,0,j*bitmap_height,15,j);

        for(int i=0;i<levels[levelNumber].lf[j];i++) {
          dbmp(SCREEN,bitmap_pixels,bitmap_width,bitmap_height,i*bitmap_width+bitmap_width,j*bitmap_height,15,rand()%4+20);    

          dbmp(SCREEN,bitmap_pixels,bitmap_width,bitmap_height,i*bitmap_width+bitmap_width,j*bitmap_height,15,rand()%4+10);    

          drect(SCREEN,i*bitmap_width+bitmap_width,j*bitmap_height,bitmap_width,bitmap_height,clr(12));
        }
      }

      pfx=fx;
      pfy=fy;

      bget(b,fx*bitmap_width+bitmap_width,fy*bitmap_height,bitmap_width,bitmap_height);

      while(1) {
        
        fcd++;
        if(fcd>=3) {
          drect(SCREEN,fx*bitmap_width+bitmap_width,fy*bitmap_height,bitmap_width,bitmap_height,clr(fcc));            fcc=(fcc+1)%16;
          fcd=0;
        }

        if(!fkh) {   

          if(button_pressed(BUTTON_UP)) { fy--; fkh=true; }
          if(button_pressed(BUTTON_DOWN)) { fy++; fkh=true; }
          if(button_pressed(BUTTON_LEFT)) { fx--; fkh=true; }
          if(button_pressed(BUTTON_RIGHT)) { fx++; fkh=true; }

          if(fy<0) fy=0;
          if(fy>=10) fy=9;       

          if(fx<0) fx=0;
          if(fx>=levels[levelNumber].lf[fy]) fx=levels[levelNumber].lf[fy]>0?levels[levelNumber].lf[fy]-1:0;

          if(fx!=pfx || fy!=pfy) {

            bput(b,pfx*bitmap_width+bitmap_width,pfy*bitmap_height,bitmap_width,bitmap_height);

            pfx=fx;
            pfy=fy;        

            bget(b,fx*bitmap_width+bitmap_width,fy*bitmap_height,bitmap_width,bitmap_height);

          }

        } else if(!button_pressed(BUTTON_UP) && !button_pressed(BUTTON_DOWN) && !button_pressed(BUTTON_LEFT) && !button_pressed(BUTTON_RIGHT)) fkh=false;
          
        

        for(int i=0;i<d;i++);

        if(button_pressed(BUTTON_SELECT)) break;

      }

      gameState=GAMESTATE_RUN;
      
      break;
      
    case GAMESTATE_END: break;
    }

  }

  return 0;
}
