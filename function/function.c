#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�⺯����ϰ

//ʹ��strcpy���������ַ�����ͷ�ļ�Ϊstring.h��

//#include <string.h>
//int main()
//{
//	char arr1[] = "abcdef";//a n c d e f \0��\0Ϊ0���޷��۲��Ƿ�\0Ҳ������
//	//char arr2[] = { 0 };// 0 0 0 0 0 0 0 0 0
//	char arr3[20] = "xxxxxxxxxxxxxxxx";
//	//��arr1������arr3����
//	strcpy(arr3, arr1);
//	printf("%s", arr3);
//	return 0;
//}

//ʹ��memset�����޸��ַ�����ͷ�ļ�Ϊstring.h��
//�����޸ĵĵ�ַ���޸ĳ�ʲô���޸ļ����ڴ棩
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	//�����ڴ��ʱ�������ֽ�Ϊ��λ
//	//ÿ���ֽڵ����ݶ���һ����
//	printf("%s\n", arr);
//	return 0;
//}





//дһ���������Խ����������α���������

//����bug
//��ʵ�δ����βε�ʱ���β���ʵ�ε�һ����ʱ���������βε��޸Ĳ���Ӱ��ʵ��
//�β�
//int swap(int* pa, int* pb)
//{
//	int c = *pa;
//	*pa = *pb;
//	*pb = c;
//	
//}
//
//int main()
//{
//	int a;
//	int b;
//	//ʵ��
//	scanf("%d %d", &a, &b);
//	printf("ǰa=%d b=%d\n", a, b);
//	swap(&a, &b);
//	//swap(a, b);
//	printf("��a=%d b=%d\n", a, b);
//	return 0;
//}






//дһ�����������ж�һ�����ǲ�������

//int prime(int a)
//{
//	int b=a;
//	int i;
//	for (i = 2; i < b; i++)
//	{
//		if ((b % i) == 0)//�ж��Ƿ��������
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	//���������a���ϴ�2��a
//	//���ܳ�����Ͳ�Ϊ����
//	//����ȡ��ԭ��ֻҪ��һ�ο���������ȷ�ϲ�������
//	//�����������1��Ϊ����������0��������
//	//ע��1�Ȳ�������Ҳ���Ǻ���
//	if (a = 1)
//	{
//		printf("%d�Ȳ�������Ҳ���Ǻ���", a);
//	}
//	if (prime(a) == 1)
//	{
//		printf("%d������\n", a);
//	}
//	else
//	{
//		printf("%d��������\n", a);
//
//	}
//	return 0;
//}






//дһ�������ж�һ���ǲ�������

//int is_leap_year(int year)
//{
//	if ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0)
//	{
//		return 0;
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int year;
//	//������Ա�400��������������
//	//������Ա�4���������ܱ�100��������������
//	//��Ϊ�����򷵻�0�����򷵻�1
//	scanf("%d", &year);
//	if (is_leap_year(year) == 0)
//	{
//		printf("%d������", year);
//	}
//	else
//		printf("%d��������", year);
//	return 0;
//}

//��
//*C���� �ж�ʱΪ�淵��1��Ϊ�ٷ���0

//int is_leap_year(int year)
//{
//	if ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0);
//	//�ж�ʱΪ�淵��1��Ϊ�ٷ���0
//}
//int main()
//{
//	int year;
//	//������Ա�400��������������
//	//������Ա�4���������ܱ�100��������������
//	//��Ϊ�����򷵻�0�����򷵻�1
//	scanf("%d", &year);
//	if (is_leap_year(year) == 0)
//	{
//		printf("%d������", year);
//	}
//	else
//		printf("%d��������", year);
//	return 0;
//}




////дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
//
//int find(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;//���ұ�Ԫ�ص��±�ӦΪԪ�ظ���-1
//	int mid;
//	while (left <= right)//���С�ڵ����ұ�
//	{
//		//mid = (left + right) / 2;
//		mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid+1;//����ĳ�mid+1����mid
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else if (arr[mid] = k)
//		{
//			return mid;
//		}
//	}
//	return EOF;
//}
//int main()
//{
//	//�ҵ��˾ͷ����±�
//	//�Ҳ����ͷ���-1 
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//��arr�в���
//	int k = 0;//���ҵ�Ԫ����
//	int sz = sizeof(arr) / sizeof(arr[0]);//һ���м���Ԫ��
//	//arr�е�Ԫ�ظ���=arr�ܹ���ռ���ֽ�/һ��Ԫ����ռ���ֽ�
//	scanf("%d", &k);//Ҫ���Ԫ��
//	int ret = find (arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���");
//	}
//	else 
//	printf("�ҵ��ˣ��±���%d", ret);
//	return 0;
//}




//�����������Ͷ��� 


//�βε����ֿ���ʡ��


//����ͷ�ļ�
#include"add.h"
//���뾲̬��
#pragma comment(lib,"add.lib")


//int main()
//{
//	int a=10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}



//�����ĵݹ�
//int main()
//{
//	printf("hehe");
//	main();
//	return 0;
//}






//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf(" %d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//
//	return 0;
//}




//��д��������������ʱ���������ַ�������
//�����������ַ���������sz����֮�У�

//int main()
//{
//	char arr[] = "abcedf";
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//int my_strlen(char* str)
//{
//	int count = 0;//ͳ���ַ�����
//	while (*str!='\0')
//	{
//		count++; 
//		str++;
//	}
//	return count;
//
//}
//int main()
//{
//	char arr[] = "abcedf";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}




//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcedf";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



////�ú����ĵݹ���n�Ľ׳�
//int fac(int n)
//{
//	if (n <= 1)
//	{
//		return n;
//	}
//	else
//		return n * fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d", ret);
//	return 0;
//}



//1   1    2    3   5    8   13....
//1   2    3    4   5    6    7....n
//n=(n-1)+(n-2)
//7=6+5
//7=4+5+4+3



//���n��쳲�������
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//��n��쳲�������
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}



//1   1    2    3   5    8   13....
//1   2    3    4   5    6    7....n
//a   b    c ...
//    a    b    c..................n

//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 2;
//	int d = 2;
//	if (n <= 2)
//		return 1;
//	for (d = 4; d <= n; d++)
//	{
//		a = b;
//		b = c;
//		c = a + b;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//��n��쳲�������
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}



//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//��n��쳲�������
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}

