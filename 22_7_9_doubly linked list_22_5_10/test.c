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

void testList2()
{
	LTNode* plist = ListInit();
	Listprint(plist);//��ӡ����

	ListPushFront(plist, 5);
	ListPushFront(plist, 4);
	ListPushFront(plist, 3);
	ListPushFront(plist, 2);
	ListPushFront(plist, 1);
	Listprint(plist);//��ӡ����

	printf("%d\n", ListSize(plist));


	ListPopFront(plist);//ͷɾ
	Listprint(plist);//��ӡ����

	ListDestory(plist);//��������
	plist = NULL;


	ListPopFront(plist);//ͷɾ
	Listprint(plist);//��ӡ����

	ListPopFront(plist);//ͷɾ
	Listprint(plist);//��ӡ����

	ListPopFront(plist);//ͷɾ
	Listprint(plist);//��ӡ����

	ListPopFront(plist);//ͷɾ
	Listprint(plist);//��ӡ����

	ListPopFront(plist);//ͷɾ
	Listprint(plist);//��ӡ����

	ListPushFront(plist, 1);
	Listprint(plist);//��ӡ����

	printf("%d\n", ListSize(plist));
}


int main()
{
	//testList1();
	testList2();
	return 0;
}