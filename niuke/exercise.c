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
////ʵ��һ���������ж�һ�����ǲ���������
////��������ʵ�ֵĺ�����ӡ100��200֮���������
//void menu()
//{
//	printf("1.�ж�һ�����ǲ�������\n");
//	printf("2.��ӡ100��200֮�������\n");
//	printf("3.�˳�\n");
//	printf("����������ѡ�");
//}
//int decide(int a)//�ж�����
//{
//	int i = 0;
//	for (i = 2; i < (a / 2); i++)
//	{
//		int x = 1;
//		if (a % i == 0)
//			return 0;//��������
//		else
//			x++;
//		if (x == (a / 2))
//			return 1;//������
//	}
//	return 1;
//}
//void print()//100��200֮�������
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
//	int a = 0;//�²������
//	int p = 1;//�ж��˳�
//	do
//	{
//		scanf("%d", &opt);
//		switch (opt)
//		{
//		case 1:
//			printf("���������֣�");
//			scanf("%d", &a);
//			if (decide(a) == 1)
//				printf("%d������", a);
//			else
//				printf("%d��������", a);
//			break;
//		case 2:
//			print();//1~100֮�������
//			break;
//		case 3:
//			p = 0;
//			break;
//		default:
//			printf("�����������������룺");
//			break;
//		}
//	} while (p);
//	return 0;
//}




//
////ʵ�ֺ����ж�year�ǲ�������
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
//		printf("%d������", a);
//	else
//		printf("%d��������", a);
//	return 0;
//}




//
////ʵ��һ�������������������������ݡ�
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
////ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
////�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
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





////�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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





////�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
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





////�ݹ�ͷǵݹ�ֱ�ʵ��strlen
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





////��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
////ʵ�֣��������ַ����е��ַ��������У����������ӡ��
////Ҫ�󣺲���ʹ��C�������е��ַ�������������
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





//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
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