#include "game.h"
#define  _CRT_SECURE_NO_WARNINGS

//初始化棋盘为全空格
void Intboard(char board[Row][Col], int row, int col)
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

//打印棋盘
void printboard(char board[Row][Col],int row,int col)
{
	int r = 0;//行
	for (r = 0; r < Row; r++)//打印的行数
	{
		int c = 0;//列
		for (c = 0; c < Col; c++)//用列来确定每一行打印多少个
		{
			if (c < Col - 1)
				printf(" %c  |", board[r][c]);//打印除最后一个以外的其他元素
			else
				printf(" %c \n", board[r][c]);//打印最后一个元素
		}
		if (r < Row - 1)//最后一行不打印分割线
		{
			//打印分割线
			for (c = 0; c < Col; c++)
			{
				if (c < Col - 1)
					printf("---|");
				else
					printf("---\n");
			}
		}
	}
}

//玩家下棋
void plarermove(char board[Row][Col], int row, int col)
{

}