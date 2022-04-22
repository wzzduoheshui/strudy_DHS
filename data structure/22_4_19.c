#define  _CRT_SECURE_NO_WARNINGS
#include "22_4_19.h"//引头文件

void SLprint(SL* ps)//打印数据，方便检查
{
	//检查结构体指针是否为空（防御式编程）
	assert(ps != NULL);

	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListInit(SL* ps)//初始化
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SLCheckCapacity(SL* ps)//检查空间
{
	//检查结构体指针是否为空（防御式编程）
	assert(ps != NULL);
	 
	//检查容量空间，满了扩容
	if (ps->size == ps->capacity)//空间放满了
	{
		//int newCapacity = ps->capacity * 2;//这里的扩容倍数没有明确的答案
		//可是如果刚开始size=capacity=0?那怎么办呢？（利用条件操作符）
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;//这里的4也没有明确答案
		SLDataType* tmp = (SLDataType*)/*对realloc的返回值进行强制类型转换*/realloc(ps->a, newCapacity * sizeof(SLDataType));//扩容
		if (tmp == NULL)//检查一下
		{
			printf("realloc fail\n");
			exit(-1);//直接结束程序
		}
		ps->a = tmp;
		ps->capacity = newCapacity;
	}
}


void SLPushBack(SL* ps, SLDataType x)//尾插
{
	//SLCheckCapacity(ps);//检查空间

	//ps->a[ps->size] = x;//在尾部插入数据，下标可以理解为有效数据的个数
	//ps->size++;//有效数据个数增加

	SLInsert(ps, ps->size, x);//在某个位置进行插入
}

void SLPushFront(SL* ps, SLDataType x)//头插
{
	SLCheckCapacity(ps);//检查空间

	////挪动数据,从后往前挪
	//int end = ps->size - 1;
	//while (end >= 0)
	//{
	//	ps->a[end + 1] = ps->a[end];
	//	--end;
	//}
	////插入数据
	//ps->a[0] = x;//放入数据
	//ps->size++;

	SLInsert(ps, 0, x);//在某个位置进行插入
}

void SLPopBack(SL* ps)//尾删
{
	////检查size
	//if (ps->size == 0)//温柔一点的检查
	//{
	//	printf("SeqList is empty\n");
	//	return;
	//}
	//else
	//ps->size--;//size--就可以
	
	////暴力检查（断言）
	//assert(ps->size > 0);//为真没事，为假报错
	//ps->size--;//size--就可以

	SLErase(ps, ps->size-1);//在最后一个位置删除(尾删)

}

void SLPopFront(SL* ps)//头删
{
	////检查size
	//assert(ps->size > 0);
	////挪动数据，从前往后挪
	//int begin = 1;
	//while (begin < ps->size)
	//{
	//	ps->a[begin - 1] = ps->a[begin];
	//	begin++;
	//}
	//ps->size--;//有效数据个数减一

	SLErase(ps, 0);//在第1个位置删除（头删）

}

void SLInsert(SL* ps, int pos, SLDataType x)//在某个位置进行插入
{
	assert(ps);//检查结构体指针
	assert(pos >= 0 && pos <= ps->size);//检查pos在顺序表允许的范围之内
	SLCheckCapacity(ps);//检查空间

	//pos开始，从后往前挪
	int end = ps->size;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[pos] = x;//插入
	ps->size++;
}

void SLErase(SL* ps, int pos)//在某个位置删除
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);//顺便检查了空

	//从pos，从前往后挪
	int begin = pos;
	while (begin < ps->size-1)
	{
		ps->a[begin] = ps->a[begin + 1];
		++begin;
	}
	ps->size--;
}

int SLFind(SL* ps, SLDataType x)//查找
{
	assert(ps);

	for (int i = 0; i < ps->size; ++i)
	{
		if (ps->a[i] == x)
			return i;
	}
	return -1;//没有找到
}

int SLModify(SL* ps, int pos, SLDataType x)//修改
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	
	ps->a[pos] = x;
}


