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
	int str;//扫雷返回数据
	//实现扫雷游戏
	char mine[Rows][Cols] = {0};//创建后台空间
	char show[Rows][Cols] = {0};//创建展示空间
	//初始化棋盘
	init_board(mine, Rows, Cols, '0');
	init_board(show, Rows, Cols, '*');
	//布置雷区
	mine_board(mine, Rows, Cols);
	//作弊版本（打印雷区棋盘）
	//print_show(mine, Rows, Cols);
	//打印玩家棋盘
	print_show(show, Rows, Cols);
	//玩家输入坐标与雷区做比较
	play_board(mine, show, Row, Col);

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