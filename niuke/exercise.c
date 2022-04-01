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



//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch <= 90)
//			putchar(ch + 32);
//		if (ch >= 97)
//			putchar(ch - 32);
//		printf("\n");
//	}
//	return 0;
//}


//
////实现一个函数，判断一个数是不是素数。
////利用上面实现的函数打印100到200之间的素数。
//void menu()
//{
//	printf("1.判断一个数是不是素数\n");
//	printf("2.打印100到200之间的素数\n");
//	printf("3.退出\n");
//	printf("请输入您的选项：");
//}
//int decide(int a)//判断素数
//{
//	int i = 0;
//	for (i = 2; i < (a / 2); i++)
//	{
//		int x = 1;
//		if (a % i == 0)
//			return 0;//不是素数
//		else
//			x++;
//		if (x == (a / 2))
//			return 1;//是素数
//	}
//	return 1;
//}
//void print()//100到200之间的素数
//{
//	int a = 100;
//	for (a = 100; a <= 200; a++)
//	{
//		if (decide(a) == 1)
//			printf("%d ", a);
//	}
//}
//int main()
//{
//	menu();
//	int opt;
//	int a = 0;//猜测的数字
//	int p = 1;//判断退出
//	do
//	{
//		scanf("%d", &opt);
//		switch (opt)
//		{
//		case 1:
//			printf("请输入数字：");
//			scanf("%d", &a);
//			if (decide(a) == 1)
//				printf("%d是素数", a);
//			else
//				printf("%d不是素数", a);
//			break;
//		case 2:
//			print();//1~100之间的素数
//			break;
//		case 3:
//			p = 0;
//			break;
//		default:
//			printf("输入有误，请重新输入：");
//			break;
//		}
//	} while (p);
//	return 0;
//}




//
////实现函数判断year是不是闰年
//int year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (year(a) == 1)
//		printf("%d是闰年", a);
//	else
//		printf("%d不是闰年", a);
//	return 0;
//}




//
////实现一个函数来交换两个整数的内容。
//void swap(int* a, int* b)
//{
//	*a = *a + *b;
//	*b = *a - *b;
//	*a = *a - *b;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int* c = &a;
//	int* d = &b;
//	swap(c, d);
//	printf("%d %d", a, b);
//	return 0;
//}



//
////实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
////如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//void mul(int a)
//{
//	int i = 1;
//	int r = 1;
//	for (r = 1; r <= a; r++)
//	{
//		for (i = 1; i <= r; i++)
//		{
//			printf("%d*%d=%d ", i, r, i * r);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	mul(a);
//	return 0;
//}





////递归方式实现打印一个整数的每一位
//int print(int a)
//{
//	if (a > 9)
//	{
//		print(a / 10);
//	}
//	printf("%d ", a % 10);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}





////递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//int yes(int n)
//{
//	int i = 1;
//	if (n > 2)
//	{
//		i = yes(n - 1);
//	}
//	return n * i;
//}
//int not(int n)
//{
//	int sum = 0;
//	int x = 1;
//	for (int a = 1; a <= n; a++)
//	{
//		x = x * a;
//	}
//	return x;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", not(n));
//	printf("%d\n", yes(n));
//
//	return 0;
//}





////递归和非递归分别实现strlen
//int Y_my_strlen(char* p)
//{
//	int x = 0;
//	if (*p != '\0')
//		return x = 1 + Y_my_strlen(p + 1);
//}
//int N_my_strlen(char* p)
//{
//	int x = 0;
//	while (*p != '\0')
//	{
//		x++;
//		p++;
//	}
//	return x;
//}
//int main()
//{
//	char a[30] = { 0 };
//	scanf("%s", a);
//	printf("%s\n", a);
//	char* p = &a[0];
//	printf("%d\n", N_my_strlen(p));
//	printf("%d\n", Y_my_strlen(p));
//	return 0;
//}





////编写一个函数 reverse_string(char * string)（递归实现）
////实现：将参数字符串中的字符反向排列，不是逆序打印。
////要求：不能使用C函数库中的字符串操作函数。
//char reverse_string(char* string)
//{
//	char a[7] = { 0 };
//	int i = 0;
//	while (i <= 6)
//	{
//		a[i] = *string + (6 - i);
//		i++;
//	}
//	return a[6];
//}
//int main()
//{
//	char arr[6] = "abcdef";
//	char* string = arr;
//	arr[0] = reverse_string(string);
//	printf("%s", arr);
//	return 0;
//}





//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
int DigitSum(int a)
{
	int i = 0;
	if (a > 9)

	return i;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d", DigitSum(a));
	return 0;
}