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



////д���뽫�������������Ӵ�С�����
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


////дһ�������ӡ1-100֮������3�ı���������
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


////���������������������������Լ��
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


////��ӡ1000�굽2000��֮�������
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



////дһ�����룺��ӡ100~200֮�������
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



////��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//int main()
//{
//	int a = 0;
//	int x = 0;
//	for (a = 1; a < 100; a++)
//	{
//		if (a % 10 == 9)//��λ
//		{
//			x++;
//		}
//		if ((a - (a % 10)) % 9 == 0 && a >= 10)//ʮλ
//		{
//			x++;
//		}
//	}
//	printf("%d", x);
//	return 0;
//}



////����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//int main()
//{
//	float i = 1.0;//����
//	float j = 1.0;//��ĸ
//	float sum = 0;//��
//	for (j = 1.0; j <= 100; j++)
//	{
//		sum += i / j;
//		i *= (-1);
//	}
//	printf("%f", sum);
//	return 0;
//}



////��10 �����������ֵ
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




////����Ļ�����9*9�˷��ھ���
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