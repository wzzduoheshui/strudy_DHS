#define  _CRT_SECURE_NO_WARNINGS

#pragma once
#define N 10

#include <stdio.h>
#include <assert.h>

typedef int STDataType;

typedef struct stack
{
	//STDataType a[N];//静态
	
	STDataType* a;
	int top;//标识栈顶位置
	int capacity;//栈的空间
}ST;


void StackPrint(ST* ps);//打印顺序表

void StackInit(ST* ps);//初始化
void StackPush(ST* ps, STDataType x);//插入数据
void StackPop(ST* ps);//删除数据
STDataType Stacktop(ST* ps);//提取栈顶的数据
int StackSize(ST* ps);//统计栈里面一共有多少元素