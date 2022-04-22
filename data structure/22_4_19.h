#pragma once
#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//#define N 200
typedef int SLDataType;//�ض�������

typedef struct SeqList//�Խṹ��������
{
	//SLDataType a[N];//����һ������(��̬)

	SLDataType* a;		//ָ��̬�����ָ�루��̬��
	int size;			//����֪���ж��ٸ�����
	int capacity;		//����-�ռ��С
}SL;//���¶���ṹ��

void SLprint(SL* ps);//��ӡ���ݣ�������

void SLCheckCapacity(SL* ps);//���ռ�

//˳�����Ĳ���--��ɾ���
void SeqListInit(SL* ps);//����Ӧ�ó�ʼ��(����ָ��)
void SLPushBack(SL* ps, SLDataType x);//β��	O(1)
void SLPopBack(SL* ps);//βɾ	O(1)

void SLPushFront(SL* ps, SLDataType x);//ͷ��	O(N)
void SLPopFront(SL* ps);//ͷɾ	O(N)

void SLInsert(SL* ps, int pos, SLDataType x);//��ĳ��λ�ý��в���
void SLErase(SL* ps, int pos);//��ĳ��λ��ɾ��

int SLFind(SL* ps, SLDataType x);//����
int SLModify(SL* ps, int pos, SLDataType x);//�޸�
 