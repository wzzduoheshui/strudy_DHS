#define  _CRT_SECURE_NO_WARNINGS

#include "double list.h"

void testList1()
{
	//LTNode* plist = NULL;
	//ListInit(&plist);

	LTNode* plist = ListInit();
	Listprint(plist);//��ӡ����

	//ListPushBack(plist, 1);
	//ListPushBack(plist, 2);
	//ListPushBack(plist, 3);
	//ListPushBack(plist, 4);
	//Listprint(plist);//��ӡ����

	ListPushFront(plist, 5);
	ListPopBack(plist);
	ListPopBack(plist);
	Listprint(plist);//��ӡ����

	ListPushFront(plist, 5);
	ListPushFront(plist, 5);
	ListPushFront(plist, 5);
	Listprint(plist);//��ӡ����

	ListPopBack(plist);
	Listprint(plist);//��ӡ����



}

int main()
{
	testList1();
	return 0;
}