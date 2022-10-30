#define  _CRT_SECURE_NO_WARNINGS

#include "SList.h"

SLTDateType* BuySListNode(SLTDateType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	assert(newnode);
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

void SListPushBack(SLTNode** pphead, SLTDateType x)
{
	SLTNode* newnode = BuySListNode(x);
	
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//урн╡╫А╣Ц
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

void SListPushFront(SLTNode** pphead, SLTDateType x)
{
	SLTNode* newnode = BuySListNode(x);

	newnode->next = *pphead;
	*pphead = newnode;
}

void SListPopFront(SLTNode** pphead)
{
	assert(*pphead != NULL); 
	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}

void SListPopBreak(SLTNode** pphead)
{
	assert(*pphead);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{	
		SLTNode* list = (*pphead)->next;
		SLTNode* list2 = *pphead;
		while (list->next != NULL)
		{
			list = list->next;
			list2 = list2->next;
		}
		list2->next = NULL;
		free(list);
	}
}

SLTNode* SListFind(SLTNode* phead, SLTDateType x)
{
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
			return cur;
		cur = cur->next;
	}	
	return NULL;
}

void SListInsertAfter(SLTNode* pos, SLTDateType x)
{
	assert(pos);
	SLTNode* cur = BuySListNode(x);
	cur->next = pos->next;
	pos->next = cur;
}

void SListEraseAfter(SLTNode* pos)
{
	SLTNode* cur = pos->next;
	pos->next = cur->next;
	free(cur);
}

void SListDestroy(SLTNode* plist)
{
	while (plist)
	{
		SListPopFront(plist);
	}
}