#define  _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;//��ָ��
	struct ListNode* prev;//ǰָ��
	LTDataType data;//��������
}LTNode;

//void ListInit(LTNode** phead);//��ʼ��
LTNode* ListInit();//��ʼ��

LTNode* BuyListNode(LTDataType x);

void ListPushBack(LTNode*phead,LTDataType x);//β��

void ListPushFront(LTNode* phead, LTDataType x);//ͷ��

void ListPopBack(LTNode* phead);//βɾ

void Listprint(LTNode* phead);//��ӡ����