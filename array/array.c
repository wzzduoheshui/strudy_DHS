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
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);
//	}
//	return 0;
//}


//二维数组创建
//int main()
//{
//	int arr[3][5] = {1,2,3,4,5,6};//不完全初始化
//	                              //其余默认为0
//	int  arr1[3][5] = { {1,2},{4,5},{5,6} };
//	int arr2[3][5] = { 0 };
//	return 0;
//}

//二维数组的使用
//int main()
//{
//	int  arr1[3][5] = { {1,2},{4,5},{5,6} };
//	int i = 0,j=0;
//	
//	/*for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", arr1[i][j]);
//		}
//		printf("\n");
//	}*/
//	//for (i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++)
//	//	         //行的个数等于整个数组大小除以第一行的大小
//	//{
//	//	for (j = 0; j < sizeof(arr1[0])/sizeof(arr1[0][0]);j++)
//	//             //列的个数等于第一行元素的大小除以第一行中第一个元素的大小
//	//	{
//	//		printf("%d", arr1[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	//打印每个元素的地址
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr1[%d][%d]=%p\t",i,j, &arr1[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//数组的越界
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 10; i++)//0 <= i <= 9
//	{
//		printf("%d  ", arr1[i]);
//	}
//	return 0;
//}




//数组作为函数参数
//冒泡排序
void bubble_sort(int arr[],int sz)
{

	int i = 0;
	for (i = 0; i < sz; i++)//每一趟冒泡排序的过程
	{
		int j = 0;//需要比较的元素下标为j和j+1
		for (j = 0; j < sz-1-i ; j++)
		{
			int a = 0;
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				a++;
			} 
		}
		if (a == 0)
			break;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	//写一个冒泡排序的函数，来排序arr数组的内容
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	printf("排序前：");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	bubble_sort(arr,sz);
	printf("排序后：");
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}



//数组名就是首元素地址
//有两个例外
//1>sizeof（数组名），数组名不是数组首元素地址，数组名表示整个数组
//2>&数组名，数组名不是首元素地址，数组名表示整个数组，取出的是整个数组的地址
// 
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	return 0;
//}