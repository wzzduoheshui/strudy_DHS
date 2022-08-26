#define  _CRT_SECURE_NO_WARNINGS

#pragma once
#define N 10

#include <stdio.h>
#include <assert.h>

typedef int STDataType;

typedef struct stack
{
	//STDataType a[N];//��̬
	
	STDataType* a;
	int top;//��ʶջ��λ��
	int capacity;//ջ�Ŀռ�
}ST;


void StackPrint(ST* ps);//��ӡ˳���

void StackInit(ST* ps);//��ʼ��
void StackPush(ST* ps, STDataType x);//��������
void StackPop(ST* ps);//ɾ������
STDataType Stacktop(ST* ps);//��ȡջ��������
int StackSize(ST* ps);//ͳ��ջ����һ���ж���Ԫ��