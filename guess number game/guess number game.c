#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void game()
{
	system("cls");
	int number;
	int gn;//存放猜测的数字
	number = rand()%100+1;//为number创建一个随机数
	printf("准备好了吗？");
	do
	{
		printf("请输入您猜的数字：");
		scanf("%d", &gn);
		if (gn > number)
		{
			printf("\n猜大了哦，再试一次！\n");
		}
		else if (gn < number)
		{
			printf("\n猜小了哦，再试一次！\n");
		}
		else
		{
			system("cls");
			printf("\n恭喜你猜对了！\n");
			break;
		}

	} while (1);
}
void menu()
{
	printf("*******猜数字游戏*******\n");
	printf("************************\n");
	printf("**1.开始游戏************\n");
	printf("************************\n");
	printf("**2.退出游戏************\n");
	printf("************************\n");
}
int main()
{
	srand((unsigned)time(NULL));//为rand创建一个随机种子
n:
	menu();//打印游戏菜单
	int a;//存放选项
	printf("请输入您的选择：");
	scanf("%d", &a);//输入选项
	do
	{
		if (a == 1)
		{
			m:
			game();
			int x;
			printf("还要继续游戏吗？\n");
			printf("继续请按1；\n");
			printf("返回菜单请按2；\n");
			printf("请输入您的选择：");
			o:
			scanf("%d", &x);
			if (x == 1)
				goto m;
			else if (x == 2)
			{
				system("cls");
				goto n;
			}
			else
			{
				printf("请重新输入：");
				goto o;
			}
		}
		else if (a == 2)
		{
			printf("欢迎下次在来！\n");
			break;
		}
		else
		{
			system("cls");
			printf("输入错误，请重新输入！\n");
			goto n;
		}
	} while (1);
	return 0;
}