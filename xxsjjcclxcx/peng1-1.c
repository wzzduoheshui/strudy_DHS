#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<time.h>
int main()
{
	printf("***Сѧ���Ӽ��˳���ϰ����***\n");
	printf("****************************\n");
	printf("**1.�ӷ���ϰ*\n");
	printf("**2.������ϰ*\n");
	printf("**3.�˷���ϰ*\n");
	printf("**4.������ϰ*\n");
	printf("**����������ѡ��:");
	int a,x,y,z;
	scanf("%d", &a);
	if (a == 1)
	{
		x = rand() % 10;//rand�����������һ��0~65535�����ֵ
		y = rand() % 10;
		printf("\n\n\n%d+%d=\n", x, y);
		printf("*���������Ĵ𰸣�");
		scanf("%d",&z);
		if ((x+y)==z)
		{
			printf("\n\n\n*��ϲ�����ˣ�Ҫ�ٽ�����Ŷ��\n\n\n");
		}
		else
		{
			printf("\n\n\n*���ź�����ˣ�Ҫ����Ŭ��Ŷ��\n\n\n");
		}
	}
	else if (a == 2)
	{
		x = rand() % 10;//rand�����������һ��0~65535�����ֵ
		y = rand() % 10;
		printf("\n\n\n%d-%d=\n", x, y);
		printf("*���������Ĵ𰸣�");
		scanf("%d", &z);
		if ((x-y)==z)
		{
			printf("\n\n\n*��ϲ�����ˣ�Ҫ�ٽ�����Ŷ��\n\n\n");
		}
		else
		{
			printf("\n\n\n*���ź�����ˣ�Ҫ����Ŭ��Ŷ��\n\n\n");
		}
	}
	else if (a == 3)
	{
		x = rand() % 10;//rand�����������һ��0~65535�����ֵ
		y = rand() % 10;
		printf("\n\n\n%d*%d=\n", x, y);
		printf("*���������Ĵ𰸣�");
		scanf("%d", &z);
		if (z == (x * y))
		{
			printf("\n\n\n*��ϲ�����ˣ�Ҫ�ٽ�����Ŷ��\n\n\n");
		}
		else
		{
			printf("\n\n\n*���ź�����ˣ�Ҫ����Ŭ��Ŷ��\n\n\n");
		}
	}
	else if (a == 4)
	{
		x = rand() % 10;//rand�����������һ��0~65535�����ֵ
		y = rand() % 10;
		printf("\n\n\n%d/%d=\n", x, y);
		printf("*���������Ĵ𰸣�");
		scanf("%d", &z);
		if (z ==(x / y))
		{
			printf("\n\n\n*��ϲ�����ˣ�Ҫ�ٽ�����Ŷ��\n\n\n");
		}
		else
		{
			printf("\n\n\n*���ź�����ˣ�Ҫ����Ŭ��Ŷ��\n\n\n");
		}
	}

	return 0;
}