#pragma once
#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//#define N 200
typedef int SLDataType;//重定义类型

typedef struct SeqList//对结构体重命名
{
	//SLDataType a[N];//定义一个数组(静态)

	SLDataType* a;		//指向动态数组的指针（动态）
	int size;			//可以知道有多少个数据
	int capacity;		//容量-空间大小
}SL;//重新定义结构体

void SLprint(SL* ps);//打印数据，方便检查

void SLCheckCapacity(SL* ps);//检查空间

//顺序表核心操作--增删查改
void SeqListInit(SL* ps);//首先应该初始化(利用指针)
void SLPushBack(SL* ps, SLDataType x);//尾插	O(1)
void SLPopBack(SL* ps);//尾删	O(1)

void SLPushFront(SL* ps, SLDataType x);//头插	O(N)
void SLPopFront(SL* ps);//头删	O(N)

void SLInsert(SL* ps, int pos, SLDataType x);//在某个位置进行插入
void SLErase(SL* ps, int pos);//在某个位置删除

int SLFind(SL* ps, SLDataType x);//查找
int SLModify(SL* ps, int pos, SLDataType x);//修改
 