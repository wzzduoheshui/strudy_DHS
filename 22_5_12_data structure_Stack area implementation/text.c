#define  _CRT_SECURE_NO_WARNINGS

#include "head.h"

void text1()
{
	ST List;
	StackInit(&List);//��ʼ��
	StackPush(&List, 1);//��������
	StackPush(&List, 2);//��������
	StackPush(&List, 4);//��������
	StackPush(&List, 5);//��������
	StackPush(&List, 6);//��������
	StackPrint(List);//��ӡ˳���


}
int main()
{
	text1();
	return 0;
}
