#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	//数组-一组相同类型元素的集合
//	//初始化
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//不完全初始化
//	int arr2[100] = { 0 };
//	//字符型数组初始化
//	char ch1[] = { 'a','b','c' };
//	//可以用ASSIC码值来为b初始化
//	char ch2[] = { 'a','98','c' };//默认为3个元素
//	//若不写初始化中元素个数，则默认为初始化的元素个数
//	//若不初始化则为随机值
//	//有些编译器可能不会支持
//	int arr[10];
//
//}

//写代码来赋值1-100
//int main()
//{
//	int arr[100];
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\t", arr[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[100];
//	int i = 0;
//	//计算数组中元素的个数
//	printf("%d\n", sizeof(arr));//400
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	printf("%d\n", sz);
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\t", arr[i]);
//	}
//
//	return 0;
//}


//一维数组在内存中的存储
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[1]);
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d]=%p\n",i, &arr[i]);
	}
	return 0;
}