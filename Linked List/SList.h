#define  _CRT_SECURE_NO_WARNINGS

#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef  int SLTDateType;//重定义类型名
typedef struct SListNode
{
	SLTDateType data;//存放数据
	struct SListNode* next;//指向下个结点的指针
}SLTNode;

void SListPrint(SLTNode* phead);

void SListPushBack(SLTNode** phead, SLTDateType x);

void SListPushFront(SLTNode** phead, SLTDateType x);

void SListPopFront(SLTNode** pphead);

void SListPopBreak(SLTNode** pphead);

SLTNode* SListFind(SLTNode* phead, SLTDateType x);

SLTDateType* BuySListNode(SLTDateType x);

void SListInsertAfter(SLTNode * pos, SLTDateType x);

void SListEraseAfter(SLTNode* pos);

void SListDestroy(SLTNode* plist);