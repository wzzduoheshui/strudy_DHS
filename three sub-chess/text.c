#define  _CRT_SECURE_NO_WARNINGS
#include "game.h"
//游戏菜单
void menu()
{
	printf("*************************\n");
	printf("****1,开始游戏.**********\n");
	printf("****2.结束游戏.**********\n");
	printf("*************************\n");
}
//游戏过程函数
void game()
{
	char ret = 0;
	//存放下棋的数据
	char board[Row][Col] = {0};
	//初始化棋盘为全空格
	Intboard(board, Row, Col);
	//打印棋盘
	printboard(board, Row,Col);
	//循环下棋
	while (1)
	{
		//玩家下棋
		playermove(board, Row, Col);
		//打印棋盘
		printboard(board, Row, Col);
		//判断输赢
		ret = win_game(board, Row, Col);
		if (ret == '*')
		{
			system("cls");
			printboard(board, Row, Col);
			printf("恭喜你赢得的游戏！\n");
			break;
		}
		else if (ret == '#')
		{
			system("cls");
			printboard(board, Row, Col);
			printf("很遗憾，再接再厉！\n");
			break;
		}
		else if (ret == 'Q')
		{
			system("cls");
			printboard(board, Row, Col);
			printf("平局了。\n");
			break;
		}
		//系统下棋
		computmove(board, Row, Col);
		//清屏
		system("cls");
		printf("电脑下棋：\n");
		//打印棋盘
		printboard(board, Row, Col);
		//判断输赢
		ret = win_game(board, Row, Col);
		if (ret == '*')
		{
			system("cls");
			printboard(board, Row, Col);
			printf("恭喜你赢得的游戏！\n");
			break;
		}
		else if (ret == '#')
		{
			system("cls");
			printboard(board, Row, Col);
			printf("很遗憾，再接再厉！\n");
			break;
		}
		else if (ret == 'Q')
		{
			system("cls");
			printboard(board, Row, Col);
			printf("平局了。\n");
			break;
		}
	}


}
//测试三子棋运行逻辑
void text()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入您的选项：");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
		{
			printf("三子棋\n");
			game();
			break;
		}
		case 2:
		{
			printf("欢迎下次再来");
			input = 0;//用于循环语句中的退出
			break;
		}
		default:
		{
			printf("选择错误，请重新输入:\n");
			input = 1;
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