/* 2048.h */

#ifndef __H_2048__
#define __H_2048__

#include "basic.h"
#define MAX_NUM 4

typedef int Board[MAX_NUM][MAX_NUM];

void initBoard(Board board);
void mergeLeft(Board board);
void genNum(Board board);
int isMove(Board board, Board temp);

#endif
