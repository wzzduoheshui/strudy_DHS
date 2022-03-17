#define  _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu()
{
	printf("*********************\n");
	printf("****1.开始游戏*******\n");
	printf("****2.结束游戏*******\n");
	printf("*********************\n");
}
//扫雷游戏的实现
void game()
{
	char min = 'm';//后台棋盘
	char sho = 's';//展示棋盘
	//实现扫雷游戏
	char mine[Rows][Cols] = {0};//创建后台空间
	char show[Rows][Cols] = {0};//创建展示空间
	//初始化棋盘
	init_board(mine, Rows, Cols, min);
	init_board(show, Rows, Cols, sho);
	//布置雷区
	mine_board(mine, Rows, Cols);
	//打印玩家棋盘
	print_show(show, Rows, Cols);
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入您的选项\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 2:
			printf("欢迎下次再来！！\n");
			input = 0;
			break;
		default:
			printf("输入错误，请重新输入：\n");
			break;
		}
	} while (input);
}
int main()
{
	test(); 
	return 0;
}