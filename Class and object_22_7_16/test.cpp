#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

////ADD���������ĺ꺯��
//
//#define ADD_a(a,b) ((a)+(b))
//
//int ADD(int a, int b)
//{
//	return a + b;
//}
//
////inline�ڷ���������������ڵ��õĵط�չ��
//
//inline int ADD_b(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	printf("%d\n", ADD_b(3, 10));
//	cout << ADD_b(3, 10) << endl;
//	cout << ADD_b(3.14, 10.86) << endl;
//
//	return 0;
//}

////C���Թ�ע������Щ���̵�ʵ�֣���Ȼ��C++��Ҳ�Ǳ�֧�ֵģ�
// typedef struct Stack_s
//{
//	int* a;
//	int top;
//	int capacity;
//}Stack;
//
//void StackInit(struct Stack* ps);
//void StackPush(struct stack* ps, int x);
//void StackPop(struct Stack* ps);//C����Щ����ǰstack����ʡ�ԣ���ΪC��֧�ֺ�������
//
////C++����C�ṹ����﷨
////C++ͬʱ��struct����������(�ṹ���ȿ��Զ��������Ҳ���Զ��庯��)
////��Ա����
////��Ա����
//struct Stack//��Stack�Ѿ��������ࣩ
//{
//	void Init()//�����Ա����
//	{
//		a = 0;
//		top = capacity = 0;
//	}
//	void Push(int x)
//	{
//		//...
//	}
//	int* a;//�����Ա
//	int top;
//	int capacity;
//};
//
//
//int main()
//{
//	//����
//	struct Stack st1;//C
//	Stack st2;//C++
//
//	//C++�г�ʼ��
//	st1.Init();//���ú���
//	st2.Push();
//	return 0;
//}

//class className
//{
//public:
//	//���壺�ɳ�Ա�����ͳ�Ա�������
//	void Init()//�����Ա����
//	{
//		a = 0;
//		top = capacity = 0;
//	}
//	void Push(int x)
//	{
//		//...
//	}
//private:
//	int* a;//�����Ա
//	int top;
//	int capacity;
//};
//
//int main()
//{
//	//����
//
//	className st2;//C++
//
//	//C++�е��ú���
//	st2.Push(1);
//	return 0;
//}
#include "head.h"

//�����зŽṹ�Ķ���
struct QN
{
	QN* next;
	int val;
};
 
class Q
{
public:
	void Init();
	void Push();
private:
	QN* head;
	QN* tail;
};