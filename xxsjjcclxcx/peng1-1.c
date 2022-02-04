#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<time.h>
int main()
{
	printf("***小学生加减乘除练习程序***\n");
	printf("****************************\n");
	printf("**1.加法练习*\n");
	printf("**2.减法练习*\n");
	printf("**3.乘法练习*\n");
	printf("**4.除法练习*\n");
	printf("**请输入您的选项:");
	int a,x,y,z;
	scanf("%d", &a);
	if (a == 1)
	{
		x = rand() % 10;//rand函数随机产生一个0~65535的随机值
		y = rand() % 10;
		printf("\n\n\n%d+%d=\n", x, y);
		printf("*请输入您的答案：");
		scanf("%d",&z);
		if ((x+y)==z)
		{
			printf("\n\n\n*恭喜你答对了，要再接再厉哦！\n\n\n");
		}
		else
		{
			printf("\n\n\n*很遗憾答错了，要继续努力哦！\n\n\n");
		}
	}
	else if (a == 2)
	{
		x = rand() % 10;//rand函数随机产生一个0~65535的随机值
		y = rand() % 10;
		printf("\n\n\n%d-%d=\n", x, y);
		printf("*请输入您的答案：");
		scanf("%d", &z);
		if ((x-y)==z)
		{
			printf("\n\n\n*恭喜你答对了，要再接再厉哦！\n\n\n");
		}
		else
		{
			printf("\n\n\n*很遗憾答错了，要继续努力哦！\n\n\n");
		}
	}
	else if (a == 3)
	{
		x = rand() % 10;//rand函数随机产生一个0~65535的随机值
		y = rand() % 10;
		printf("\n\n\n%d*%d=\n", x, y);
		printf("*请输入您的答案：");
		scanf("%d", &z);
		if (z == (x * y))
		{
			printf("\n\n\n*恭喜你答对了，要再接再厉哦！\n\n\n");
		}
		else
		{
			printf("\n\n\n*很遗憾答错了，要继续努力哦！\n\n\n");
		}
	}
	else if (a == 4)
	{
		x = rand() % 10;//rand函数随机产生一个0~65535的随机值
		y = rand() % 10;
		printf("\n\n\n%d/%d=\n", x, y);
		printf("*请输入您的答案：");
		scanf("%d", &z);
		if (z ==(x / y))
		{
			printf("\n\n\n*恭喜你答对了，要再接再厉哦！\n\n\n");
		}
		else
		{
			printf("\n\n\n*很遗憾答错了，要继续努力哦！\n\n\n");
		}
	}

	return 0;
}