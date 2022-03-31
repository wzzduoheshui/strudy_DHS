#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//    double arr[5][5] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%lf %lf %lf %lf %lf ", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
//    }
//    for (i = 0; i < 5; i++)
//    {
//        double sum = 0.0;
//        for (j = 0; j < 5; j++)
//        {
//            printf("%.1lf ", arr[i][j]);
//            sum += arr[i][j];
//        }
//        printf("%.1lf\n", sum);
//    }
//
//    return 0;
//}


//int main()
//{
//    double arr[5][5] = { 0 };
//    for (int i = 0; i < 5; i++)
//    {
//        for (int j = 0; j < 5; j++)
//        {
//            scanf("%lf", &arr[i][j]);
//        }
//    }
//    for (int i = 0; i < 5; i++)
//    {
//        double sum = 0.0;
//        for (int j = 0; j < 5; j++)
//        {
//            printf("%.1lf ", arr[i][j]);
//            sum += arr[i][j];
//        }
//        printf("%.1lf\n", sum);
//    }
//
//    return 0;
//}



////写代码将三个整数数按从大到小输出。
//int main()
//{
//	int arr[3] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int a = 0;
//	for (a = 0; a < 3; a++)
//	{
//		for (i = 0; i < 3; i++)
//		{
//			if (arr[i] < arr[i + 1])
//			{
//				arr[i] = arr[i] + arr[i + 1];
//				arr[i + 1] = arr[i] - arr[i + 1];
//				arr[i] = arr[i] - arr[i + 1];
//			}
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}


////写一个代码打印1-100之间所有3的倍数的数字
//int main()
//{
//	int a = 0;
//	for (a = 0; a <= 100; a++)
//	{
//		if (a % 3 == 0)
//		{
//			printf("%d ", a);
//		}
//	}
//}


////给定两个数，求这两个数的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//	{
//		a = a + b;
//		b = a - b;
//		a = a - b;
//	}
//	do
//	{
//		if (a % b == 0)
//		{
//			printf("%d", b);
//			break;
//		}
//		else
//		{
//			int tum = b;
//			b = a % b;
//			a = tum;
//		}
//	} while (1);
//	return 0;
//}


////打印1000年到2000年之间的闰年
//int main()
//{
//	int year = 1000;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}



////写一个代码：打印100~200之间的素数
//int main()
//{
//	int a = 100;
//	for (a = 100; a <= 200; a++)
//	{
//		int i = 2;
//		int x = 0;
//		for (i = 2; i < a / 2; i++)
//		{
//			if (a % i == 0)
//			{
//				x = 1;
//				break;
//			}
//		}
//		if (x == 0)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}



////编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int a = 0;
//	int x = 0;
//	for (a = 1; a < 100; a++)
//	{
//		if (a % 10 == 9)//个位
//		{
//			x++;
//		}
//		if ((a - (a % 10)) % 9 == 0 && a >= 10)//十位
//		{
//			x++;
//		}
//	}
//	printf("%d", x);
//	return 0;
//}



////计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//int main()
//{
//	float i = 1.0;//分子
//	float j = 1.0;//分母
//	float sum = 0;//和
//	for (j = 1.0; j <= 100; j++)
//	{
//		sum += i / j;
//		i *= (-1);
//	}
//	printf("%f", sum);
//	return 0;
//}



////求10 个整数中最大值
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int a = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (a < arr[i])
//		{
//			a = arr[i];
//		}
//	}
//	printf("%d", a);
//	return 0;
//}




////在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int r = 1;
//	int c = 1;
//	int a = 0;
//	for (r = 1; r < 10; r++)
//	{
//		for (c = 1; c <= r; c++)
//		{
//			a = c * r;
//			printf("%d*%d=%d\t", c, r, a);
//		}
//		printf("\n");
//	}
//	return 0;
//}



#include<stdio.h>
int main()
{
	char ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch <= 90)
			putchar(ch + 32);
		if (ch >= 97)
			putchar(ch - 32);
		printf("\n");
	}
	return 0;
}