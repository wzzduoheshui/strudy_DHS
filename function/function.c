#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//库函数练习

//使用strcpy函数拷贝字符串（头文件为string.h）

//#include <string.h>
//int main()
//{
//	char arr1[] = "abcdef";//a n c d e f \0（\0为0，无法观察是否将\0也拷贝）
//	//char arr2[] = { 0 };// 0 0 0 0 0 0 0 0 0
//	char arr3[20] = "xxxxxxxxxxxxxxxx";
//	//将arr1拷贝到arr3当中
//	strcpy(arr3, arr1);
//	printf("%s", arr3);
//	return 0;
//}

//使用memset函数修改字符串（头文件为string.h）
//（所修改的地址，修改成什么，修改几个内存）
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	//设置内存的时候是以字节为单位
//	//每个字节的内容都是一样的
//	printf("%s\n", arr);
//	return 0;
//}





//写一个函数可以交换两个整形变量的内容

//出现bug
//当实参传给形参的时候，形参是实参的一份临时拷贝，对形参的修改不会影响实参
//形参
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
//	//实参
//	scanf("%d %d", &a, &b);
//	printf("前a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	//swap(a, b);
//	printf("后a=%d b=%d\n", a, b);
//	return 0;
//}






//写一个函数可以判断一个数是不是素数

//int prime(int a)
//{
//	int b=a;
//	int i;
//	for (i = 2; i < b; i++)
//	{
//		if ((b % i) == 0)//判断是否可以整除
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
//	//所输入的数a除上从2到a
//	//如能除尽则就不为素数
//	//利用取余原则，只要有一次可以整除则确认不是素数
//	//如果函数返回1则为素数，返回0则不是素数
//	//注：1既不是素数也不是合数
//	if (a = 1)
//	{
//		printf("%d既不是素数也不是合数", a);
//	}
//	if (prime(a) == 1)
//	{
//		printf("%d是素数\n", a);
//	}
//	else
//	{
//		printf("%d不是素数\n", a);
//
//	}
//	return 0;
//}






//写一个函数判断一年是不是闰年

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
//	//如果可以被400整除，则是闰年
//	//如果可以被4整除但不能被100整除，则是闰年
//	//若为闰年则返回0，否则返回1
//	scanf("%d", &year);
//	if (is_leap_year(year) == 0)
//	{
//		printf("%d是闰年", year);
//	}
//	else
//		printf("%d不是闰年", year);
//	return 0;
//}

//简化
//*C语言 判断时为真返回1，为假返回0

//int is_leap_year(int year)
//{
//	if ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0);
//	//判断时为真返回1，为假返回0
//}
//int main()
//{
//	int year;
//	//如果可以被400整除，则是闰年
//	//如果可以被4整除但不能被100整除，则是闰年
//	//若为闰年则返回0，否则返回1
//	scanf("%d", &year);
//	if (is_leap_year(year) == 0)
//	{
//		printf("%d是闰年", year);
//	}
//	else
//		printf("%d不是闰年", year);
//	return 0;
//}




////写一个函数，实现一个整形有序数组的二分查找。
//
//int find(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;//最右边元素的下表应为元素个数-1
//	int mid;
//	while (left <= right)//左边小于等于右边
//	{
//		//mid = (left + right) / 2;
//		mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid+1;//建议改成mid+1跳过mid
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
//	//找到了就返回下标
//	//找不到就返回-1 
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//在arr中查找
//	int k = 0;//查找的元素是
//	int sz = sizeof(arr) / sizeof(arr[0]);//一共有几个元素
//	//arr中的元素个数=arr总共所占的字节/一个元素所占的字节
//	scanf("%d", &k);//要查的元素
//	int ret = find (arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到");
//	}
//	else 
//	printf("找到了，下标是%d", ret);
//	return 0;
//}




//函数的声明和定义 


//形参的名字可以省略


//引入头文件
#include"add.h"
//导入静态库
#pragma comment(lib,"add.lib")


int main()
{
	int a=10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d", sum);
	return 0;
}
