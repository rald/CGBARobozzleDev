#ifndef ROBOT_H
#define ROBOT_H

#include "direction.h"

typedef struct Robot Robot;

struct Robot {
  int x,y;
  Direction d;
};

#endif
