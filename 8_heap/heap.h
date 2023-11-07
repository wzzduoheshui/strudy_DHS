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

void adjustUp(Hp* hp);//向上调整算法
void adjustDown(Hp* hp);//向下调整算法

void heapPrint(Hp* hp);//打印数据

void heapPush(Hp* hp, heapDateType x);//推送数据
void heapInit(Hp* hp);//初始化
void heapDestory(Hp* hp);//销毁
void heapPop(Hp* hp);//删除堆顶的数据
void heapEmpty(Hp* hp);//将堆置为空
heapDateType heapTop(Hp* hp);//取堆顶的数据
size_t heapSize(Hp* hp);//堆中数据的大小