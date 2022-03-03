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
int swap(int x, int y)
{
	int c = 0;
	c = x;
	x = y;
	y = c;
}

int main()
{
	int a;
	int b;
	//实参
	scanf("%d %d", &a, &b);
	printf("前a=%d b=%d\n", a, b);
	swap(a, b);
	printf("后a=%d b=%d\n", a, b);
	return 0;
}
