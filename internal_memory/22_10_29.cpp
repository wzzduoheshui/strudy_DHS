#define  _CRT_SECURE_NO_WARNINGS

//#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//using namespace std;
//
//int main()
//{
//	//��̬����һ��int���͵Ŀռ�
//	int* ptr1 = new int;
//
//	//��̬����5��int���͵Ŀռ�
//	int* ptr2 = new int[5];
//
//	//��̬����һ��int���͵Ŀռ䣬�������ʼ��Ϊ5
//	int* ptr3 = new int(5);
//
//	//��̬����5���ڴ�ռ䣬�������ʼ��
//	int* pte4 = new int[5]{ 0,1,2 };
//
//	delete ptr1;
//	delete[] pte4;
//
//	return 0;
//}
//#include <iostream>
//#include <stdio.h>
//
//using namespace std;
//
//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		cout << "A��int a = 0��-->" << this << endl;
//	}
//	A(const A& a)
//	{
//		cout << "A(const A& a)-->" << this << endl;
//	}
//	~A()
//	{
//		cout << "~A-->" << this << endl;
//	}
//private:
//	int _a = 0;
//};
//
//int main()
//{
//	//A* ptr = (A*)malloc(sizeof(A));
//	//A* ptr2 = new A;
//	//A* ptr3 = new A(10);
//	
//	//free(ptr);
//	//delete ptr2;
//
//	//A a1(1);
//	//A a2(2);
//	//A(3);
//	//cout << endl << endl;
//
//
//	//A* ptr4 = new A[2]{ 1,2 };//ֱ�ӵ��ù��캯��(���漰������������ʽ���͵�ת��)
//	//A* ptr5 = new A[2]{ A(a1),A(a2) };//���ÿ������캯��
//	//A* ptr6 = new A[2]{ A(1),A(2) };//���ù��캯�����ٵ��ÿ�������----��ֱ�ӵ��ù��캯��
//	//
//	//delete[] ptr4;
//	//delete[] ptr5;
//
//	return 0;
//}

//#include<iostream>
//#include<assert.h>
//using namespace std;
//int main(){
//	int i = 0;
//	try 
//	{
//		while (1)
//		{
//			char* p2 = new char[1024u * 1024u ];
//			printf("%p-->%d \n", p2, i);
//			i++;
//		}
//	}
//	catch (exception& e)
//	{
//		cout << e.what() << endl;
//	}
//	return 0;
//}


//#include<iostream>
//#include<assert.h>
//using namespace std;
//
//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{}
//	A(const A& a)
//	{
//		_a = a._a;
//	}
//	~A()
//	{
//		this->_a = 0;
//	}
//	void print(const A& a)
//	{
//		cout << a._a << endl;
//	}
//private:
//	int _a = 0;
//};
//
//int main() {
//	A* a = new A(10);
//	
//	
//	//(*a).print(*a);
//	return 0;
//}


#include <iostream>
using namespace std;

struct ListNode
{
	int _a = 0;
	ListNode* _next;
	static allocator<ListNode> alloc;

	void* operator new(size_t n)
	{
		cout << "���ڴ���п���" << endl;
		void* obj = alloc.allocate(1);
		return obj;
	}
	void operator delete(void* ptr)
	{
		cout << "���ڴ����ɾ��" << endl;
		alloc.deallocate((ListNode*)ptr, 1);
	}

	struct ListNode(int val)
		:_a(val)
		, _next(nullptr)
	{

	}
};

int main()
{
	ListNode* L1 = new ListNode(1);
	ListNode* L2 = new ListNode(2);
	ListNode* L3 = new ListNode(3);

	return 0;
}