#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"

void menu()
{
	printf("*************************\n");
	printf("****1,开始游戏.**********\n");
	printf("****2.结束游戏.**********\n");
	printf("*************************\n");
}
void game()
{
	//存放下棋的数据
	char board[row][col] = { 0 };
	//初始化棋盘为全空格
	Initboard(board, row, col);
	//打印棋盘
	printboard(board, row,col);
	
}

//测试三子棋运行逻辑
void text()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入您的选项：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			printf("三子棋");
			break;
		}
		case 2:
		{
			printf("欢迎下次再来");
			input = 0;//用于循环语句中的退出
			break;
		}
		default :
		{
			printf("选择错误，请重新输入:\n");
			break;
		}
		}

	} while (input);//0才退出
	
}
int main()
{
	text();

	return 0;
}