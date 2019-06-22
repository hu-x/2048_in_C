/* main.c */

#include "keyboard.h"
#include "2048.h"
#include "screen.h"
#include "basic.h"
#include <stdio.h>
#include <stdlib.h>

void test_keyboard(){
	/* test keyboard part */
	KEYTYPE key;
	while (1){
		key = getKey();
		if (key == KBD_ESC) 
			break;
		else 
			printf("%d\n",key);
	}
	printf("Exit test...");
	system("pause > nul");	
}

void test_screen(){
	KEYTYPE key;
	Board b;
	Board temp;
	int i, j;
	initBoard(b);
	genNum(b);
	genNum(b);
	refreshScreen(b);
	while (1){
		key = getKey();
		for(i = 0; i < MAX_NUM; i++)
			for(j = 0; j < MAX_NUM; j++)
				temp[i][j] = b[i][j];
		if (key == KBD_ESC) 
			break;
		if (key == KBD_ENTER || key == KBD_UNKNOWN)
			continue;
		if (key == KBD_LEFT)
			mergeLeft(b);
		if (key == KBD_DOWN){
			rotateBoard(b);
			mergeLeft(b);
			rotateBoard(b);
			rotateBoard(b);
			rotateBoard(b);
		}
		if (key == KBD_UP){
			rotateBoard(b);
			rotateBoard(b);
			rotateBoard(b);
			mergeLeft(b);
			rotateBoard(b);
		}
		if (key == KBD_RIGHT){
			rotateBoard(b);
			rotateBoard(b);
			mergeLeft(b);
			rotateBoard(b);
			rotateBoard(b);
		}
		if(isMove(b, temp)){
			genNum(b);
			refreshScreen(b);
		}
	}
	printf("Exit test...");
	system("pause > nul");	
	
}

int main(){
	int a;
	// test_keyboard();
	test_screen();
	// merge_test();
	return 0;
}
