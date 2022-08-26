#define  _CRT_SECURE_NO_WARNINGS

#include "double list.h"

void testList1()
{
	//LTNode* plist = NULL;
	//ListInit(&plist);

	LTNode* plist = ListInit();
	Listprint(plist);//打印链表

	//ListPushBack(plist, 1);
	//ListPushBack(plist, 2);
	//ListPushBack(plist, 3);
	//ListPushBack(plist, 4);
	//Listprint(plist);//打印链表

	ListPushFront(plist, 5);
	ListPopBack(plist);
	ListPopBack(plist);
	Listprint(plist);//打印链表

	ListPushFront(plist, 5);
	ListPushFront(plist, 5);
	ListPushFront(plist, 5);
	Listprint(plist);//打印链表

	ListPopBack(plist);
	Listprint(plist);//打印链表



}

void testList2()
{
	LTNode* plist = ListInit();
	Listprint(plist);//打印链表

	ListPushFront(plist, 5);
	ListPushFront(plist, 4);
	ListPushFront(plist, 3);
	ListPushFront(plist, 2);
	ListPushFront(plist, 1);
	Listprint(plist);//打印链表

	printf("%d\n", ListSize(plist));


	ListPopFront(plist);//头删
	Listprint(plist);//打印链表

	ListDestory(plist);//销毁链表
	plist = NULL;


	ListPopFront(plist);//头删
	Listprint(plist);//打印链表

	ListPopFront(plist);//头删
	Listprint(plist);//打印链表

	ListPopFront(plist);//头删
	Listprint(plist);//打印链表

	ListPopFront(plist);//头删
	Listprint(plist);//打印链表

	ListPopFront(plist);//头删
	Listprint(plist);//打印链表

	ListPushFront(plist, 1);
	Listprint(plist);//打印链表

	printf("%d\n", ListSize(plist));
}


int main()
{
	//testList1();
	testList2();
	return 0;
}