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

int main()
{
	testList1();
	return 0;
}