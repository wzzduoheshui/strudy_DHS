#include "game.h"
#define  _CRT_SECURE_NO_WARNINGS

void Intboard(char board[][3], int row, int col)
{
	int r = 0;
	for (r = 0; r < row; r++);
	{
		int c = 0;
		for (c = 0; c < col; c++)
		{
			board[r][c] = ' ';
		}
	}
}
void printboard(char board[][3],int row,int col)
{
	int r = 0;
	for (r = 0; r < row; r++)
	{
		int c = 0;
		for (c = 0; c < col; c++)
		{
			printf("|%c|", board[r][c]);
		}
	}
}