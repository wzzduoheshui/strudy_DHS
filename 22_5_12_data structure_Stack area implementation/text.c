#define  _CRT_SECURE_NO_WARNINGS

#include "head.h"

void text1()
{
	ST List;
	StackInit(&List);//初始化
	StackPush(&List, 1);//插入数据
	StackPush(&List, 2);//插入数据
	StackPush(&List, 4);//插入数据
	StackPush(&List, 5);//插入数据
	StackPush(&List, 6);//插入数据
	StackPrint(List);//打印顺序表


}
int main()
{
	text1();
	return 0;
}
