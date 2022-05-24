#define  _CRT_SECURE_NO_WARNINGS

#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef  int SLTDateType;//�ض���������
typedef struct SListNode
{
	SLTDateType data;//�������
	struct SListNode* next;//ָ���¸�����ָ��
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