#define  _CRT_SECURE_NO_WARNINGS

#include "game.h"



//初始化棋盘
void init_board(char arr[Rows][Cols], int rows, int cols, char str)
{
	int r = 0;
	int c = 0;
	for (r = 0; r < Rows; r++)
	{
		for (c = 0; c < Cols; c++)
		{
			arr[r][c] = str;
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
	printf("---------------扫雷游戏---------------\n\n");
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
	for (r = 1; r <= Row; r++)
	{
		//打印棋盘以及纵向坐标
		for (c = 1; c <= Col; c++)
		{
			if (c == 1)
			{
				printf(" %d  %c |", r , arr[r][c]);
			}
			else if (c > 1 && c < Col)
			{
				printf(" %c |", arr[r][c]);
			}
			else if (c == Col)
			{
				printf(" %c \n", arr[r][c]);
			}
		}
		c = 0;
		if (r == Row)//不打印最后一行分割线
			break;
		//打印分割线
		for (c = 1; c <= Col; c++)
		{
			if (c == 1)
			{
				printf("   ---|");
			}
			else if (c > 0 && c < Col)
			{
				printf("---|");
			}
			else if (c == Col)
			{
				printf("---\n");
			}
		}
	}
}


//统计周围有几个雷方法1
int get_mine(char arr[Rows][Cols], int x, int y)
{
	int r = x - 1;
	int c = y - 1;
	int m = 0;
	for (r = x - 1; r <= x + 1; r++)
	{
		for (c = y - 1; c <= y + 1; c++)
		{
			if (arr[r][c] == '1')
			{
				m++;
			}
		}
	}
	return m;
}
//统计周围有几个雷方法二2
//int get_mine(char arr[Rows][Cols], int x, int y)
//{
//	return arr[x - 1][y - 1] + arr[x - 1][y] + arr[x - 1][y + 1] + arr[x][y - 1] +
//		arr[x][y + 1] + arr[x + 1][y - 1] + arr[x + 1][y] + arr[x + 1][y + 1]
//		- 8 * '0';
//}
//玩家输入坐标与雷区做比较
void play_board(char arr1 [Rows][Cols], char arr2 [Rows][Cols], int row, int col)
{
	int x = 1;
	int y = 0;//玩家输入的坐标
	int win = 0;
	while (win<Row*Col-10)
	{
		printf("请输入坐标:");
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= row && y>0 && y <= col)
		{
			if (arr1[x][y] == '1')
			{
				printf("该坐标位置是雷区，扫雷失败，游戏结束！\n");
				return 0;
			}
			else
			{
				system("cls");//清理屏幕
				//作弊版本
				//print_show(arr1, Rows, Cols);
				printf("该位置不是雷，游戏继续：\n");
				//统计周围有几个雷
				//雷的个数
				int count = get_mine(arr1, x, y);
				arr2[x][y] = count + '0';
				print_show(arr2, Rows, Cols);
				win++;
			}
		}
		else
		{
			printf("该坐标不存在，请重新输入！\n");
		}
	}
	if (win == Row * Col - 10)
	{
		printf("恭喜你赢得游戏！\n");
		print_show(arr1, Rows, Cols);
	}
}