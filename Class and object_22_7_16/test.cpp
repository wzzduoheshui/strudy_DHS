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

////�����зŽṹ�Ķ���
//struct QN
//{
//	QN* next;
//	int val;
//};
// 
//class Q
//{
//public:
//	void Init();
//	void Push();
//private:
//	QN* head;
//	QN* tail;
//};


//class SList
//{
//public:
//	void pob();
//
//	int head;//����
//	int top;
//};
//
//int x;//����
//extern int x;//����
//
//int main()
//{
//	cout << sizeof(SList) << endl;
//
//	SList s1;//���ʵ����
//	return 0;
//}
//
//class aa
//{
//public:
//	void print()
//	{
//		cout << 1 << endl;
//	}
//	int aa;
//};
//int main()
//{
//	aa* aaa = nullptr;
//	aaa->print();
//	 
//}

//class Date
//{
//public:
//	//����Ͳ�ϣ��������ĳ�ʼ����ô���أ����������أ�
//	//Date()
//	//{
//	//	_year = 1;
//	//	_month = 1;
//	//	_day =1;
//	//}
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void printf()
//	{
//		cout <<  _year <<"/" << _month <<"/" << _day << endl;
//	}
//private:
//	int _year;//����
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2022, 8, 28);//�������������ĳ�ʼ��
//	//����Ͳ�ϣ��������ĳ�ʼ����ô���أ����������أ�
//	Date d2;
//	return 0;
//}


//class date
//{
//public:
//	void init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void printf()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	int _year;//����
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	d1.Init(2022, 7, 07);
//
//	Date d2;
//	d2.Init(2022, 8, 28);
//
//	d1.printf();
//	d2.printf();
//	return 0;
//}

//class Date
//{
//public:
//	void printf()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	int _year = 1;//���ﲻ�ǳ�ʼ�������Ǹ�Ĭ�Ϲ��캯����ȱʡֵ
//	int _month = 1;
//	int _day = 1;
//};
//struct MQ
//{
//	MQ()
//	{
//		//Ĭ�Ϲ��캯��
//	}
//	int x;
//	int y;
//	int z;
//};
//class MyQueue
//{
//	MQ _x;
//	MQ _y;
//};
//int main()
//{
//	MyQueue d1;
//	return 0;
//}

class Date
{
public:
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void printf()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
private:
	int _year;//����
	int _month;
	int _day;
};
struct Date_
{
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1;

	Date_ D1;
	
	cout << sizeof(d1) << endl;
	cout << sizeof(D1) << endl;

	return 0;
}
