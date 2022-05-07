#ifndef LEVEL_H
#define LEVEL_H

#include "robot.h"
#include "function.h"

#define FUNCTION_MAX 10

#define LEVEL_WIDTH  16
#define LEVEL_HEIGHT 10

typedef struct Level Level;

struct Level {
  Robot r;
  int lf[FUNCTION_MAX];
  int w,h;
  int m[LEVEL_WIDTH*LEVEL_HEIGHT];
};

#endif
