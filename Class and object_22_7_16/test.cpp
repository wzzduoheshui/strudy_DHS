#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

////ADD两个变量的宏函数
//
//#define ADD_a(a,b) ((a)+(b))
//
//int ADD(int a, int b)
//{
//	return a + b;
//}
//
////inline在符合条件的情况下在调用的地方展开
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

////C语言关注的是这些过程的实现（当然在C++中也是被支持的）
// typedef struct Stack_s
//{
//	int* a;
//	int top;
//	int capacity;
//}Stack;
//
//void StackInit(struct Stack* ps);
//void StackPush(struct stack* ps, int x);
//void StackPop(struct Stack* ps);//C中这些名字前stack不能省略，因为C不支持函数重载
//
////C++兼容C结构体的语法
////C++同时将struct升级成了类(结构，既可以定义变量，也可以定义函数)
////成员变量
////成员函数
//struct Stack//（Stack已经升级成类）
//{
//	void Init()//定义成员函数
//	{
//		a = 0;
//		top = capacity = 0;
//	}
//	void Push(int x)
//	{
//		//...
//	}
//	int* a;//定义成员
//	int top;
//	int capacity;
//};
//
//
//int main()
//{
//	//定义
//	struct Stack st1;//C
//	Stack st2;//C++
//
//	//C++中初始化
//	st1.Init();//调用函数
//	st2.Push();
//	return 0;
//}

//class className
//{
//public:
//	//类体：由成员函数和成员变量组成
//	void Init()//定义成员函数
//	{
//		a = 0;
//		top = capacity = 0;
//	}
//	void Push(int x)
//	{
//		//...
//	}
//private:
//	int* a;//定义成员
//	int top;
//	int capacity;
//};
//
//int main()
//{
//	//定义
//
//	className st2;//C++
//
//	//C++中调用函数
//	st2.Push(1);
//	return 0;
//}
#include "head.h"

//声明中放结构的定义
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