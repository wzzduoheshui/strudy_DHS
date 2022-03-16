#include "game.h"
#define  _CRT_SECURE_NO_WARNINGS

//初始化棋盘为全空格
void Intboard(char board[Row][Col], int row, int col)
{
	int r = 0;
	for (r = 0; r < row; r++)
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
	printf("    0 | 1 | 2 \n");
	for (r = 0; r < Row; r++)//打印的行数
	{
		int c = 0;//列
		for (c = 0; c < Col; c++)//用列来确定每一行打印多少个
		{
			//打印坐标
			if (c == 0)//打印每行的第一个元素
			{
				printf(" %d ", r);
				printf(" %c |", board[r][c]);
				c++;
			}
			if (c > 0 &&c < Col - 1)
				printf(" %c |", board[r][c]);//打印每行的中间元素
			else
				printf(" %c \n", board[r][c]);//打印最后一个元素
		}
		if (r < Row - 1)//最后一行不打印分割线
		{
			//打印分割线
			for (c = 0; c < Col; c++)
			{
				if (c == 0)
				{
					printf("   ---|");
					c++;
				}
				if (c > 0 && c < Col - 1)
					printf("---|");
				else
					printf("---\n");
			}
		}
	}
}

//玩家下棋
void playermove(char board[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋\n");
	while (1)
	{
		printf("请玩家输入坐标>\n");
		scanf("%d %d", &x, &y);
		if ((0 <= x && x<=row) && (0 <= y && y <= col))
		{
			if (board[x][y]== ' ')
			{
				board[x][y] = '*';
				break;
			}
			else
				printf("坐标被占用，请重新输入！\n");
		}
		else
			printf("输入内容不符合规定，请重新输入！\n");
	}
	
}

//系统下棋
void computmove(char board[Row][Col] , int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑下棋\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

// 判断输赢
char  win_game(char board[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	//判断行
	for (x = 0; x < Row; x++)
	{
		if (board[x][0] == board[x][1] && board[x][1] == board[x][2] && board[x][2] != ' ')
			return board[x][0];
	}
	//判断列
	for (x = 0; x < Col; x++)
	{
		if (board[0][x] == board[1][x] && board[1][x] == board[2][x] && board[2][x] != ' ')
			return board[0][x];
	}
	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
		return board[0][0];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')
		return board[0][2];
	//判断平局
	int a = 0;
	for (x = 0; x < Row; x++)
	{
		for (y = 0; y < Col; y++)
		{
			if (board[x][y] != ' ')
				a++;
			else if (board[x][y] == ' ')
				return 'C';
		}
		if (a == 9)
			return 'Q';
	}

}