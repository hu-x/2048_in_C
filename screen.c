/* screen.c */

#include "screen.h"
#include "stdio.h"

void refreshScreen(Board board){
	CLS;
	char *content[] = {
		"       ", "   2   ", "   4   ", "   8   ", 
		"  16   ", "  32   ", "  64   ", "  128  ", 
		"  256  ", "  512  ", " 1024  ", " 2048  ", 
		" 4096  ", " 8192  ", " 16384 ", " 32768 ", 
		" 65536 "};
	
	printf("+-------+-------+-------+-------+\n");
	printf("|       |       |       |       |\n");
  	printf("|%s|%s|%s|%s|\n", content[board[0][0]], content[board[0][1]]
	  						, content[board[0][2]], content[board[0][3]]);
	printf("|       |       |       |       |\n");
	printf("+-------+-------+-------+-------+\n");
	printf("|       |       |       |       |\n");
  	printf("|%s|%s|%s|%s|\n", content[board[1][0]], content[board[1][1]]
	  						, content[board[1][2]], content[board[1][3]]);
	printf("|       |       |       |       |\n");
	printf("+-------+-------+-------+-------+\n");
	printf("|       |       |       |       |\n");
  	printf("|%s|%s|%s|%s|\n", content[board[2][0]], content[board[2][1]]
	  						, content[board[2][2]], content[board[2][3]]);
	printf("|       |       |       |       |\n");
	printf("+-------+-------+-------+-------+\n");
	printf("|       |       |       |       |\n");
  	printf("|%s|%s|%s|%s|\n", content[board[3][0]], content[board[3][1]]
	  						, content[board[3][2]], content[board[3][3]]);
	printf("|       |       |       |       |\n");
	printf("+-------+-------+-------+-------+\n");
	
	
}
