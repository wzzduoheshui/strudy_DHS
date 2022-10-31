#define  _CRT_SECURE_NO_WARNINGS

//#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//using namespace std;
//
//int main()
//{
//	//动态申请一个int类型的空间
//	int* ptr1 = new int;
//
//	//动态申请5个int类型的空间
//	int* ptr2 = new int[5];
//
//	//动态申请一个int类型的空间，并将其初始化为5
//	int* ptr3 = new int(5);
//
//	//动态申请5个内存空间，并将其初始化
//	int* pte4 = new int[5]{ 0,1,2 };
//
//	delete ptr1;
//	delete[] pte4;
//
//	return 0;
//}
#include <iostream>
#include <stdio.h>

using namespace std;

class A
{
public:
	A(int a = 0)
		:_a(a)
	{
		cout << "A（int a = 0）-->" << this << endl;
	}
	A(const A& a)
	{
		cout << "A(const A& a)-->" << this << endl;
	}
	~A()
	{
		cout << "~A-->" << this << endl;
	}
private:
	int _a = 0;
};

int main()
{
	//A* ptr = (A*)malloc(sizeof(A));
	//A* ptr2 = new A;
	//A* ptr3 = new A(10);
	
	//free(ptr);
	//delete ptr2;

	A a1(1);
	A a2(2);
	A(3);
	cout << endl << endl;


	A* ptr4 = new A[2]{ 1,2 };//直接调用构造函数
	A* ptr5 = new A[2]{ A(a1),A(a2) };//调用拷贝构造函数
	A* ptr6 = new A[2]{ A(1),A(2) };//调用构造函数，再调用拷贝构造----》直接调用构造函数
	
	delete[] ptr4;
	delete[] ptr5;

	return 0;
}