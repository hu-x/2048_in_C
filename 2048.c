/* 2048.c */

#include "2048.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initBoard(Board board){
	int i, j;
	for(i = 0; i < MAX_NUM; i++)
		for (j = 0; j < MAX_NUM; j++)
			board[i][j] = 0;
	
	//return board;
}

void mergeLeft(Board board){
	int i, res, chk;
	for (i = 0; i < MAX_NUM; i++){
		// Merge one line
		res = 0; 
		chk = 1;
		while(chk < MAX_NUM ){
			if(board[i][res] == 0)
				board[i][res] = board[i][chk];
			else if(board[i][chk] == 0)
				;
			else {
				if(board[i][res] == board[i][chk]){
					board[i][res]++;
					if (res != chk) board[i][chk] = 0;
					res++;
				}
				else{
					res++;
					board[i][res] = board[i][chk];
				}
				if (res != chk) board[i][chk] = 0;
			}
			chk++;
		}
		for (chk = res + 1; chk < MAX_NUM; chk++)
			board[i][chk] = 0;
	}
}

void rotateBoard(Board board){
	Board temp;
	int i, j;
	for(i = 0; i < MAX_NUM; i++)
		for(j = 0; j < MAX_NUM; j++)
			temp[i][j] = board[MAX_NUM - 1 - j][i];
			
	for(i = 0; i < MAX_NUM; i++)
		for(j = 0; j < MAX_NUM; j++)
			board[i][j] = temp[i][j];
	
}
/* 
void merge_test(){
	int i, res = 0, chk = 1;
	int board[4] = {4,2,2,1};
	for(i = 0; i < MAX_NUM; i++)
		printf("%d ",board[i]);
		putchar (10);
	while(chk < MAX_NUM ){
		if(board[res] == 0)
			board[res] = board[chk];
		else if(board[chk] == 0)
			;
		else {
			if(board[res] == board[chk]){
				board[res]++;
				if (res != chk) board[chk] = 0;
				res++;
			}
			else{
				res++;
				board[res] = board[chk];
			}
			if (res != chk) board[chk] = 0;
		}
		chk++;
		for(i = 0; i < MAX_NUM; i++)
			printf("%d ",board[i]);
		printf("res = %d  chk = %d\n", res, chk);
	}
	for (chk = res + 1; chk < MAX_NUM; chk++)
		board[chk] = 0;
		
	for(i = 0; i < MAX_NUM; i++)
		printf("%d ",board[i]);
	
}*/

int isFull(Board board){
	int i, j;
	for (i = 0; i < MAX_NUM; i++)
		for (j = 0; j < MAX_NUM; j++)
			if (board[i][j] == 0)
				return 0;
	return 1;
}

void genNum(Board board){
	if (isFull(board)) return ;
	srand((int)time(NULL));
	
	int x, y;
	do{
		x = rand() % 4;
		y = rand() % 4;
	}while(board[x][y] != 0);
	board[x][y] = rand() % 10 > 8 ? 2 : 1;
}

int isMove(Board board, Board temp){
	int i, j;
	for(i = 0; i < MAX_NUM; i++)
		for(j = 0; j < MAX_NUM; j++)
			if(board[i][j] != temp[i][j])
				return 1;
	return 0;
}
