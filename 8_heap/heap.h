#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int heapDateType;

typedef struct Heap
{
	heapDateType* _heap;
	size_t _size;
	size_t _capacity;
}Hp;

void adjustUp(Hp* hp);//���ϵ����㷨
void adjustDown(Hp* hp);//���µ����㷨

void heapPrint(Hp* hp);//��ӡ����

void heapPush(Hp* hp, heapDateType x);//��������
void heapInit(Hp* hp);//��ʼ��
void heapDestory(Hp* hp);//����
void heapPop(Hp* hp);//ɾ���Ѷ�������
void heapEmpty(Hp* hp);//������Ϊ��
heapDateType heapTop(Hp* hp);//ȡ�Ѷ�������
size_t heapSize(Hp* hp);//�������ݵĴ�С