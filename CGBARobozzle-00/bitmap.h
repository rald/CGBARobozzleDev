#ifndef BITMAP_H
#define BITMAP_H

unsigned char bitmap_width=16;
unsigned char bitmap_height=16;
unsigned char bitmap_frames=31;


unsigned char bitmap_pixels[] = {

/* 0 F0 */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,15,15,15,15,15,15,12,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,12,15,15,15,12,15,15,
15,15,12,12,12,12,12,15,15,12,15,15,15,12,15,15,
15,15,12,12,12,12,12,15,15,12,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,12,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,12,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,12,12,12,12,12,15,15,
15,15,12,15,15,15,15,15,15,12,12,12,12,12,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/* 1 F1 */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,12,12,12,12,12,15,15,15,15,15,15,12,15,15,
15,15,12,12,12,12,12,15,15,15,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,12,12,12,12,12,15,15,15,15,15,15,12,15,15,
15,15,12,12,12,12,12,15,15,15,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/* 2 F2 */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,15,15,15,15,15,15,12,15,15,15,15,15,15,
15,15,12,15,15,15,15,15,15,12,15,15,15,15,15,15,
15,15,12,15,15,15,15,15,15,12,12,12,12,12,15,15,
15,15,12,15,15,15,15,15,15,12,12,12,12,12,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/* 3 F3 */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,12,12,12,12,12,15,15,
15,15,12,15,15,15,15,15,15,12,12,12,12,12,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

 /* 4 F4 */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,12,12,12,12,12,15,15,12,15,15,15,12,15,15,
15,15,12,12,12,12,12,15,15,12,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,12,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,12,15,15,15,12,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/* 5 F5 */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,15,15,15,15,15,15,12,15,15,15,15,15,15,
15,15,12,15,15,15,15,15,15,12,15,15,15,15,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,12,12,12,12,12,15,15,
15,15,12,15,15,15,15,15,15,12,12,12,12,12,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/* 6 F6 */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,15,15,15,15,15,15,12,15,15,15,15,15,15,
15,15,12,15,15,15,15,15,15,12,15,15,15,15,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,15,15,15,15,15,15,12,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,12,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,12,12,12,12,12,15,15,
15,15,12,15,15,15,15,15,15,12,12,12,12,12,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/* 7 F7 */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,12,12,12,12,12,15,15,15,15,15,15,12,15,15,
15,15,12,12,12,12,12,15,15,15,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/* 8 F8 */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,15,15,15,15,15,15,12,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,12,15,15,15,12,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,15,15,15,15,15,15,12,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,12,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,12,12,12,12,12,15,15,
15,15,12,15,15,15,15,15,15,12,12,12,12,12,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/* 9 F9 */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,15,15,15,15,15,15,12,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,12,15,15,15,12,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,15,15,15,15,12,15,15,
15,15,12,15,15,15,15,15,15,12,12,12,12,12,15,15,
15,15,12,15,15,15,15,15,15,12,12,12,12,12,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/* 10 forward  */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15, 0, 0,15,15,15,15,15,15,15,
15,15,15,15,15,15, 0,12,12, 0,15,15,15,15,15,15,
15,15,15,15,15, 0,12,12,12,12, 0,15,15,15,15,15,
15,15,15,15, 0,12,12,12,12,12,12, 0,15,15,15,15,
15,15,15, 0,12,12,12,12,12,12,12,12, 0,15,15,15,
15,15,15, 0,12,12,12,12,12,12,12,12, 0,15,15,15,
15,15,15,15, 0, 0,12,12,12,12, 0, 0,15,15,15,15,
15,15,15,15,15, 0,12,12,12,12, 0,15,15,15,15,15,
15,15,15,15,15, 0,12,12,12,12, 0,15,15,15,15,15,
15,15,15,15,15,15, 0, 0, 0, 0,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/* 11 backward */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15, 0, 0, 0, 0,15,15,15,15,15,15,
15,15,15,15,15, 0,12,12,12,12, 0,15,15,15,15,15,
15,15,15,15,15, 0,12,12,12,12, 0,15,15,15,15,15,
15,15,15,15, 0, 0,12,12,12,12, 0, 0,15,15,15,15,
15,15,15, 0,12,12,12,12,12,12,12,12, 0,15,15,15,
15,15,15, 0,12,12,12,12,12,12,12,12, 0,15,15,15,
15,15,15,15, 0,12,12,12,12,12,12, 0,15,15,15,15,
15,15,15,15,15, 0,12,12,12,12, 0,15,15,15,15,15,
15,15,15,15,15,15, 0,12,12, 0,15,15,15,15,15,15,
15,15,15,15,15,15,15, 0, 0,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/* 12 turn left */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15, 0, 0,15,15,15,15,15,15,15,15,15,
15,15,15,15, 0,12,12, 0,15,15,15,15,15,15,15,15,
15,15,15, 0,12,12,12, 0, 0, 0, 0,15,15,15,15,15,
15,15, 0,12,12,12,12,12,12,12,12, 0,15,15,15,15,
15, 0,12,12,12,12,12,12,12,12,12,12, 0,15,15,15,
15, 0,12,12,12,12,12,12,12,12,12,12,12, 0,15,15,
15,15, 0,12,12,12,12,12,12,12,12,12,12, 0,15,15,
15,15,15, 0,12,12,12, 0, 0,12,12,12,12, 0,15,15,
15,15,15,15, 0,12,12, 0, 0,12,12,12,12, 0,15,15,
15,15,15,15,15, 0, 0,15,15, 0, 0, 0, 0,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/* 13 turn right */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15, 0, 0,15,15,15,15,15,
15,15,15,15,15,15,15,15, 0,12,12, 0,15,15,15,15,
15,15,15,15, 0, 0, 0, 0, 0,12,12,12, 0,15,15,15,
15,15,15, 0,12,12,12,12,12,12,12,12,12, 0,15,15,
15,15, 0,12,12,12,12,12,12,12,12,12,12,12, 0,15,
15,15, 0,12,12,12,12,12,12,12,12,12,12,12, 0,15,
15,15, 0,12,12,12,12,12,12,12,12,12,12, 0,15,15,
15,15, 0,12,12,12,12, 0, 0,12,12,12, 0,15,15,15,
15,15, 0,12,12,12,12, 0, 0,12,12, 0,15,15,15,15,
15,15,15, 0, 0, 0, 0,15,15, 0, 0,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/* 14 paint gray */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15, 0, 0, 0, 0,15,15,15,15,15,15,
15,15,15,15,15, 0,13,13,13,13, 0,15,15,15,15,15,
15,15,15,15, 0,13,13,13,13,13,13, 0,15,15,15,15,
15,15,15, 0,13,13,13,13,13,13,13,13, 0,15,15,15,
15,15,15, 0,13,13,13,13,13,13,13,13, 0,15,15,15,
15,15,15, 0,13,13,13,13,13,13,13,13, 0,15,15,15,
15,15,15, 0,13,13,13,13,13,13,13,13, 0,15,15,15,
15,15,15,15, 0,13,13,13,13,13,13, 0,15,15,15,15,
15,15,15,15,15, 0,13,13,13,13, 0,15,15,15,15,15,
15,15,15,15,15,15, 0, 0, 0, 0,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/* 15 paint red */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15, 0, 0, 0, 0,15,15,15,15,15,15,
15,15,15,15,15, 0, 2, 2, 2, 2, 0,15,15,15,15,15,
15,15,15,15, 0, 2, 2, 2, 2, 2, 2, 0,15,15,15,15,
15,15,15, 0, 2, 2, 2, 2, 2, 2, 2, 2, 0,15,15,15,
15,15,15, 0, 2, 2, 2, 2, 2, 2, 2, 2, 0,15,15,15,
15,15,15, 0, 2, 2, 2, 2, 2, 2, 2, 2, 0,15,15,15,
15,15,15, 0, 2, 2, 2, 2, 2, 2, 2, 2, 0,15,15,15,
15,15,15,15, 0, 2, 2, 2, 2, 2, 2, 0,15,15,15,15,
15,15,15,15,15, 0, 2, 2, 2, 2, 0,15,15,15,15,15,
15,15,15,15,15,15, 0, 0, 0, 0,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/* 16 paint green */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15, 0, 0, 0, 0,15,15,15,15,15,15,
15,15,15,15,15, 0, 6, 6, 6, 6, 0,15,15,15,15,15,
15,15,15,15, 0, 6, 6, 6, 6, 6, 6, 0,15,15,15,15,
15,15,15, 0, 6, 6, 6, 6, 6, 6, 6, 6, 0,15,15,15,
15,15,15, 0, 6, 6, 6, 6, 6, 6, 6, 6, 0,15,15,15,
15,15,15, 0, 6, 6, 6, 6, 6, 6, 6, 6, 0,15,15,15,
15,15,15, 0, 6, 6, 6, 6, 6, 6, 6, 6, 0,15,15,15,
15,15,15,15, 0, 6, 6, 6, 6, 6, 6, 0,15,15,15,15,
15,15,15,15,15, 0, 6, 6, 6, 6, 0,15,15,15,15,15,
15,15,15,15,15,15, 0, 0, 0, 0,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/* 17 paint blue */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15, 0, 0, 0, 0,15,15,15,15,15,15,
15,15,15,15,15, 0, 9, 9, 9, 9, 0,15,15,15,15,15,
15,15,15,15, 0, 9, 9, 9, 9, 9, 9, 0,15,15,15,15,
15,15,15, 0, 9, 9, 9, 9, 9, 9, 9, 9, 0,15,15,15,
15,15,15, 0, 9, 9, 9, 9, 9, 9, 9, 9, 0,15,15,15,
15,15,15, 0, 9, 9, 9, 9, 9, 9, 9, 9, 0,15,15,15,
15,15,15, 0, 9, 9, 9, 9, 9, 9, 9, 9, 0,15,15,15,
15,15,15,15, 0, 9, 9, 9, 9, 9, 9, 0,15,15,15,15,
15,15,15,15,15, 0, 9, 9, 9, 9, 0,15,15,15,15,15,
15,15,15,15,15,15, 0, 0, 0, 0,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/* 18 return */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,12,12,12,12,15,15,12,12,12,12,12,15,15,
15,15,12,15,15,15,12,15,15,15,15,12,15,15,15,15,
15,15,12,15,15,15,12,15,15,15,15,12,15,15,15,15,
15,15,12,12,12,12,12,15,15,15,15,12,15,15,15,15,
15,15,12,12,12,12,12,15,15,15,15,12,15,15,15,15,
15,15,12,12,15,15,15,15,15,15,15,12,15,15,15,15,
15,15,12,15,12,15,15,15,15,15,15,12,15,15,15,15,
15,15,12,15,15,12,15,15,15,15,15,12,15,15,15,15,
15,15,12,15,15,15,12,15,15,15,15,12,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/* 19 delete */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,12,12,15,15,15,15,15,15,12,12,15,15,15,
15,15,15,12,12,15,15,15,15,15,15,12,12,15,15,15,
15,15,15,15,15,12,12,15,15,12,12,15,15,15,15,15,
15,15,15,15,15,12,12,15,15,12,12,15,15,15,15,15,
15,15,15,15,15,15,15,12,12,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,12,12,15,15,15,15,15,15,15,
15,15,15,15,15,12,12,15,15,12,12,15,15,15,15,15,
15,15,15,15,15,12,12,15,15,12,12,15,15,15,15,15,
15,15,15,12,12,15,15,15,15,15,15,12,12,15,15,15,
15,15,15,12,12,15,15,15,15,15,15,12,12,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/* 20 gray  */

13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,

/* 21 red */

 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,

 /* 22 green */
 
 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
 
/* 23 blue */

 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
 
/* 24 player north */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15, 0, 0,15,15,15,15,15,15,15,
15,15,15,15,15,15, 0, 2, 2, 0,15,15,15,15,15,15,
15,15,15,15,15,15, 0, 2, 2, 0,15,15,15,15,15,15,
15,15,15,15,15, 0, 2, 2, 2, 2, 0,15,15,15,15,15,
15,15,15,15,15, 0, 2, 2, 2, 2, 0,15,15,15,15,15,
15,15,15,15, 0, 2, 2, 2, 2, 2, 2, 0,15,15,15,15,
15,15,15,15, 0, 2, 2, 2, 2, 2, 2, 0,15,15,15,15,
15,15,15, 0, 2, 2, 2, 2, 2, 2, 2, 2, 0,15,15,15,
15,15,15, 0, 2, 2, 2, 2, 2, 2, 2, 2, 0,15,15,15,
15,15, 0, 2, 2, 2, 2, 0, 0, 2, 2, 2, 2, 0,15,15,
15,15, 0, 2, 2, 2, 0,15,15, 0, 2, 2, 2, 0,15,15,
15, 0, 2, 2, 2, 0,15,15,15,15, 0, 2, 2, 2, 0,15,
15, 0, 2, 2, 0,15,15,15,15,15,15, 0, 2, 2, 0,15,
15,15, 0, 0,15,15,15,15,15,15,15,15, 0, 0,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/* 25 player east  */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15, 0, 0,15,15,15,15,15,15,15,15,15,15,15,15,
15, 0, 2, 2, 0, 0,15,15,15,15,15,15,15,15,15,15,
15, 0, 2, 2, 2, 2, 0, 0,15,15,15,15,15,15,15,15,
15,15, 0, 2, 2, 2, 2, 2, 0, 0,15,15,15,15,15,15,
15,15,15, 0, 2, 2, 2, 2, 2, 2, 0, 0,15,15,15,15,
15,15,15,15, 0, 2, 2, 2, 2, 2, 2, 2, 0, 0,15,15,
15,15,15,15,15, 0, 2, 2, 2, 2, 2, 2, 2, 2, 0,15,
15,15,15,15,15, 0, 2, 2, 2, 2, 2, 2, 2, 2, 0,15,
15,15,15,15, 0, 2, 2, 2, 2, 2, 2, 2, 0, 0,15,15,
15,15,15, 0, 2, 2, 2, 2, 2, 2, 0, 0,15,15,15,15,
15,15, 0, 2, 2, 2, 2, 2, 0, 0,15,15,15,15,15,15,
15, 0, 2, 2, 2, 2, 0, 0,15,15,15,15,15,15,15,15,
15, 0, 2, 2, 0, 0,15,15,15,15,15,15,15,15,15,15,
15,15, 0, 0,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/* 26 player south */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15, 0, 0,15,15,15,15,15,15,15,15, 0, 0,15,15,
15, 0, 2, 2, 0,15,15,15,15,15,15, 0, 2, 2, 0,15,
15, 0, 2, 2, 2, 0,15,15,15,15, 0, 2, 2, 2, 0,15,
15,15, 0, 2, 2, 2, 0,15,15, 0, 2, 2, 2, 0,15,15,
15,15, 0, 2, 2, 2, 2, 0, 0, 2, 2, 2, 2, 0,15,15,
15,15,15, 0, 2, 2, 2, 2, 2, 2, 2, 2, 0,15,15,15,
15,15,15, 0, 2, 2, 2, 2, 2, 2, 2, 2, 0,15,15,15,
15,15,15,15, 0, 2, 2, 2, 2, 2, 2, 0,15,15,15,15,
15,15,15,15, 0, 2, 2, 2, 2, 2, 2, 0,15,15,15,15,
15,15,15,15,15, 0, 2, 2, 2, 2, 0,15,15,15,15,15,
15,15,15,15,15, 0, 2, 2, 2, 2, 0,15,15,15,15,15,
15,15,15,15,15,15, 0, 2, 2, 0,15,15,15,15,15,15,
15,15,15,15,15,15, 0, 2, 2, 0,15,15,15,15,15,15,
15,15,15,15,15,15,15, 0, 0,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/* 27 player west */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15, 0, 0,15,15,
15,15,15,15,15,15,15,15,15,15, 0, 0, 2, 2, 0,15,
15,15,15,15,15,15,15,15, 0, 0, 2, 2, 2, 2, 0,15,
15,15,15,15,15,15, 0, 0, 2, 2, 2, 2, 2, 0,15,15,
15,15,15,15, 0, 0, 2, 2, 2, 2, 2, 2, 0,15,15,15,
15,15, 0, 0, 2, 2, 2, 2, 2, 2, 2, 0,15,15,15,15,
15, 0, 2, 2, 2, 2, 2, 2, 2, 2, 0,15,15,15,15,15,
15, 0, 2, 2, 2, 2, 2, 2, 2, 2, 0,15,15,15,15,15,
15,15, 0, 0, 2, 2, 2, 2, 2, 2, 2, 0,15,15,15,15,
15,15,15,15, 0, 0, 2, 2, 2, 2, 2, 2, 0,15,15,15,
15,15,15,15,15,15, 0, 0, 2, 2, 2, 2, 2, 0,15,15,
15,15,15,15,15,15,15,15, 0, 0, 2, 2, 2, 2, 0,15,
15,15,15,15,15,15,15,15,15,15, 0, 0, 2, 2, 0,15,
15,15,15,15,15,15,15,15,15,15,15,15, 0, 0,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/* 28 star */

15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15, 0, 0,15,15,15,15,15,15,15,
15,15,15,15,15,15, 0, 5, 5, 0,15,15,15,15,15,15,
15,15, 0, 0, 0, 0, 5, 5, 5, 5, 0, 0, 0, 0,15,15,
15, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0,15,
15,15, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0,15,15,
15,15,15, 0, 5, 5, 5, 5, 5, 5, 5, 5, 0,15,15,15,
15,15, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0,15,15,
15, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0,15,
15,15, 0, 0, 0, 0, 5, 5, 5, 5, 0, 0, 0, 0,15,15,
15,15,15,15,15,15, 0, 5, 5, 0,15,15,15,15,15,15,
15,15,15,15,15,15,15, 0, 0,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,

/*
15,15,15,15,15,15,15, 0, 0,15,15,15,15,15,15,15,
15,15,15,15,15,15, 0, 5, 5, 0,15,15,15,15,15,15,
15,15,15,15,15, 0, 5, 5, 5, 5, 0,15,15,15,15,15,
15, 0, 0, 0, 0, 0, 5, 5, 5, 5, 0, 0, 0, 0, 0,15,
 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0,
 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0,
15, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0,15,
15,15, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0,15,15,
15,15,15, 0, 5, 5, 5, 5, 5, 5, 5, 5, 0,15,15,15,
15,15,15, 0, 5, 5, 5, 5, 5, 5, 5, 5, 0,15,15,15,
15,15, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0,15,15,
15,15, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0,15,15,
15, 0, 5, 5, 5, 5, 5, 0, 0, 5, 5, 5, 5, 5, 0,15,
15, 0, 5, 5, 5, 0, 0,15,15, 0, 0, 5, 5, 5, 0,15,
15,15, 0, 0, 0,15,15,15,15,15,15, 0, 0, 0,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
*/

/* 29 white square */
 
12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
12,15,15,15,15,15,15,15,15,15,15,15,15,15,15,12,
12,15,15,15,15,15,15,15,15,15,15,15,15,15,15,12,
12,15,15,15,15,15,15,15,15,15,15,15,15,15,15,12,
12,15,15,15,15,15,15,15,15,15,15,15,15,15,15,12,
12,15,15,15,15,15,15,15,15,15,15,15,15,15,15,12,
12,15,15,15,15,15,15,15,15,15,15,15,15,15,15,12,
12,15,15,15,15,15,15,15,15,15,15,15,15,15,15,12,
12,15,15,15,15,15,15,15,15,15,15,15,15,15,15,12,
12,15,15,15,15,15,15,15,15,15,15,15,15,15,15,12,
12,15,15,15,15,15,15,15,15,15,15,15,15,15,15,12,
12,15,15,15,15,15,15,15,15,15,15,15,15,15,15,12,
12,15,15,15,15,15,15,15,15,15,15,15,15,15,15,12,
12,15,15,15,15,15,15,15,15,15,15,15,15,15,15,12,
12,15,15,15,15,15,15,15,15,15,15,15,15,15,15,12,
12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,

/* 30 black square */
 
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0,15,15,15,15,15,15,15,15,15,15,15,15,15,15, 0,
 0,15,15,15,15,15,15,15,15,15,15,15,15,15,15, 0,
 0,15,15,15,15,15,15,15,15,15,15,15,15,15,15, 0,
 0,15,15,15,15,15,15,15,15,15,15,15,15,15,15, 0,
 0,15,15,15,15,15,15,15,15,15,15,15,15,15,15, 0,
 0,15,15,15,15,15,15,15,15,15,15,15,15,15,15, 0,
 0,15,15,15,15,15,15,15,15,15,15,15,15,15,15, 0,
 0,15,15,15,15,15,15,15,15,15,15,15,15,15,15, 0,
 0,15,15,15,15,15,15,15,15,15,15,15,15,15,15, 0,
 0,15,15,15,15,15,15,15,15,15,15,15,15,15,15, 0,
 0,15,15,15,15,15,15,15,15,15,15,15,15,15,15, 0,
 0,15,15,15,15,15,15,15,15,15,15,15,15,15,15, 0,
 0,15,15,15,15,15,15,15,15,15,15,15,15,15,15, 0,
 0,15,15,15,15,15,15,15,15,15,15,15,15,15,15, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,



};

#endif
