#define  _CRT_SECURE_NO_WARNINGS

#include "game.h"



//初始化棋盘
void init_board(char arr[Rows][Cols], int rows, int cols, char str)
{
	int r = 0;
	int c = 0;
	if (str=='m')//初始化后台棋盘--'0'
	{
		for (r = 0; r < Rows; r++)
		{
			for (c = 0; c < Cols; c++)
			{
				arr[r][c] = '0';
			}
		}
	}
	else if (str == 's')//初始化玩家棋盘--'*'
	{
		for (r = 0; r < Rows; r++)
		{
			for (c = 0; c < Cols; c++)
			{
				arr[r][c] = '*';
			}
		}
	}

}



//布置雷区
void mine_board(char arr[Rows][Cols],int row,int col)
{
	int x = 0;
	int y = 0;
	int i = 0;//布置过的雷的数量
	for (i = 0;i<10;)//注意这里是个死循环
	{
		x = rand() % Row;//雷的坐标位置
		y = rand() % Col;
		if (arr[x+1][y+1] == '0')
		{
			arr[x+1][y+1] = '1';
			i++;//布置一次雷i++
		}
	}
}



//打印玩家棋盘
void print_show(char arr[Rows][Cols], int row, int col)
{
	//打印横向坐标以及分割线
	int i = 1;
	for (i = 1; i <= Row; i++)//打印玩家棋盘的横向坐标
	{
		if (i == 1)//第一个数据
			printf("    %d |", i);
		else if (i > 1 && i < Row)//中间项数据
			printf(" %d |", i);
		else if (i == 9)//最后的数据
			printf(" %d \n", i);
	}
	i = 1;
	for (i = 1; i <= Row; i++)//打印玩家棋盘的第一行分割线
	{
		if (i == 1)//第一个数据
			printf("   ---|");
		else if (i > 1 && i < Row)//中间项数据
			printf("---|");
		else if (i == 9)//最后的数据
			printf("---\n");
	}
	int r = 0;
	int c = 0;
	for (r = 0; r < Row; r++)
	{
		//打印棋盘以及纵向坐标
		for (c = 0; c < Col; c++)
		{
			if (c == 0)
			{
				printf(" %d  %c |", r + 1, arr[r][c]);
			}
			else if (c > 0 && c < Col-1)
			{
				printf(" %c |", arr[r][c]);
			}
			else if (c == Col-1)
			{
				printf(" %c \n", arr[r][c]);
			}
		}
		c = 0;
		if (r == Row - 1)//不打印最后一行分割线
			break;
		//打印分割线
		for (c = 0; c < Col; c++)
		{
			if (c == 0)
			{
				printf("   ---|");
			}
			else if (c > 0 && c < Col - 1)
			{
				printf("---|");
			}
			else if (c == Col - 1)
			{
				printf("---\n");
			}
		}
	}
}
