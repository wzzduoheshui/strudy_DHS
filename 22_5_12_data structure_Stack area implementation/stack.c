#define  _CRT_SECURE_NO_WARNINGS

#include "head.h"

void StackPrint(ST ps)//��ӡ˳���
{
	assert(ps);
	for (int i = 0; i < ps->capacity; i++)
	{
		printf("%d->", ps->a[i]);

	}
}

void StackInit(ST* ps)//��ʼ��
{
	ps->a = NULL;
	ps->capacity = ps->top = 0;
}

void StackDestory(ST* ps)
{
	while (ps->capacity < 0)
	{
		ps->top--;
	}
}

void StackPush(ST* ps, STDataType x)//��������
{
	assert(ps);

	if (ps->top == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* tmp = realloc(ps->a, sizeof(STDataType) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc fail!\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}