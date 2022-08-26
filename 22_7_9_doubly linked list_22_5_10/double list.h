#define  _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;//后指针
	struct ListNode* prev;//前指针
	LTDataType data;//数据类型
}LTNode;

//void ListInit(LTNode** phead);//初始化
LTNode* ListInit();//初始化

LTNode* BuyListNode(LTDataType x);

void ListPushBack(LTNode*phead,LTDataType x);//尾插

void ListPushFront(LTNode* phead, LTDataType x);//头插

void ListPopBack(LTNode* phead);//尾删

void ListPopFront(LTNode* phead);//头删

void Listprint(LTNode* phead);//打印链表

bool ListEmpty(LTNode* phead);//检查是不是除头结点外还有其他结点

void ListInsert(LTNode* pos, LTDataType x);//在pos位置之前插入x

void ListErase(LTNode* pos);//删除pos位置之后的结点

int ListSize(LTNode* phead);//计算链表长度

void ListDestory(LTNode* phead);//销毁链表