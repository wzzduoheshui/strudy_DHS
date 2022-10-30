#define  _CRT_SECURE_NO_WARNINGS

#include "SList.h"

void TestSList1()
{
	SLTNode* n1 = (SLTNode*)malloc(sizeof(SLTNode));
	assert(n1);

	SLTNode* n2 = (SLTNode*)malloc(sizeof(SLTNode));
	assert(n2);

	SLTNode* n3 = (SLTNode*)malloc(sizeof(SLTNode));
	assert(n3);

	SLTNode* n4 = (SLTNode*)malloc(sizeof(SLTNode));
	assert(n4);

	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n4->data = 4;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;

	SListPrint(n1);//¥Ú”°

	//SListPushBack(&n1, 5);
	//SListPushBack(&n1, 6);
	//SListPushBack(&n1, 7);
	//SListPushBack(&n1, 8);
	//SListPrint(n1);
}

void TestSList2()
{
	SLTNode* n1 = NULL;
	SListPushFront(&n1, 1);
	SListPushFront(&n1, 2);
	SListPushFront(&n1, 3);
	SListPushFront(&n1, 3);
	SListPushFront(&n1, 3);


	SListPrint(n1);
	SListPopFront(&n1);


	SLTDateType * pos= SListFind(n1, 2);
	printf("%p %d\n", pos, 2);

	SListInsertAfter(pos, 5);
	SListPrint(n1);

	SListEraseAfter(pos);

	SListPrint(n1);

	SListDestroy(n1);

	SListPrint(n1);

}

void Test3()
{

	SLTNode* n1 = NULL;
	SListInsertAfter(n1, 1);
	SListPrint(n1);

	return 0;
}

int main()
{
	Test3();
	//TestSList1();
	//TestSList2();
	//SLTNode* n1 = NULL;
	//SListPushFront(&n1, 1);
	//SListPushFront(&n1, 2);
	//SListPushFront(&n1, 3);
	//SListPushFront(&n1, 3);
	//SListPushFront(&n1, 3);
	//SListPrint(n1);
	return 0;
}