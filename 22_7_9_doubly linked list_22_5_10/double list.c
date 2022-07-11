#define  _CRT_SECURE_NO_WARNINGS

#include "double list.h"

LTNode* BuyListNode(LTDataType x)
{
	LTNode* node = (LTNode*)malloc(sizeof(LTNode));
	if (node == NULL)
	{
		perror("malloc fail");//����ϵͳ�ӿ�
		exit(-1);
	}

	node->next = NULL;
	node->prev = NULL;
	node->data = x;

	return node;
}

//void ListInit(LTNode** phead)
//{
//	*phead = BuyListNode(-1);
//	(*phead)->next = *phead;
//	(*phead)->prev = *phead;
//}

LTNode* ListInit()
{
	LTNode* phead = BuyListNode(-1);
	phead->next = phead;
	phead->prev = phead;

	return phead;
}

void ListPushBack(LTNode* phead, LTDataType x)//β��
{
	assert(phead);//pheadһ������ΪNULL

	LTNode* newnode = BuyListNode(x);
	LTNode* tail = phead->prev;

	newnode->prev = phead->prev;
	newnode->next = phead;

	tail->next = newnode;
	phead->prev = newnode;
}

void Listprint(LTNode* phead)//��ӡ����
{
	assert(phead);

	LTNode* node = phead;
	LTNode* node1 = phead;
	node = node->next;
	do
	{
		if (node != node1)
		{
			printf("%d->", node->data);
			node = node->next;
		}
		else
		{
			printf("NULL\n");
			break;
		}
	} while (1);

}

void ListPushFront(LTNode* phead, LTDataType x)//ͷ��
{
	assert(phead);

	LTNode* newnode = BuyListNode(x);
	newnode->prev = phead;
	newnode->next = phead->next;

	phead->next->prev = newnode;
	phead->next = newnode;
}

void ListPopBack(LTNode* phead)//βɾ
{
	assert(phead);

	LTNode* tail = phead->prev;
	LTNode* tailprev = phead->prev->prev;
	
	if (tail != phead)
	{
		free(tail);
		tailprev->next = phead;
		phead->prev = tailprev;
	}
}