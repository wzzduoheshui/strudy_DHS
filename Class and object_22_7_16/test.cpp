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

////声明中放结构的定义
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
//	int head;//声明
//	int top;
//};
//
//int x;//定义
//extern int x;//声明
//
//int main()
//{
//	cout << sizeof(SList) << endl;
//
//	SList s1;//类的实例化
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
//	//如果就不希望进行类的初始化怎么办呢？（函数重载）
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
//	int _year;//声明
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2022, 8, 28);//这样就完成了类的初始化
//	//如果就不希望进行类的初始化怎么办呢？（函数重载）
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
//	int _year;//声明
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
//	int _year = 1;//这里不是初始化，而是给默认构造函数的缺省值
//	int _month = 1;
//	int _day = 1;
//};
//struct MQ
//{
//	MQ()
//	{
//		//默认构造函数
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

//class Date
//{
//public:
//	void Init(int year, int month, int day)
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
//	int _year;//声明
//	int _month;
//	int _day;
//};
//struct Date_
//{
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//
//	Date_ D1;
//	
//	cout << sizeof(d1) << endl;
//	cout << sizeof(D1) << endl;
//
//	return 0;
//}

//class Date
//{
//public:
//	Date(int year = 0, int month = 0, int day = 0)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	void printf()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	int _year;//声明
//	int _month;
//	int _day;
//};
//struct Date_
//{
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2022, 03, 29);
//
//	return 0;
//}


//typedef int DataType;
//class Stack
//{
//public:
//	Stack(size_t capacity = 10)
//	{
//		_array = (DataType*)malloc(capacity * sizeof(DataType));
//		if (nullptr == _array)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		_size = 0;
//		_capacity = capacity;
//	}
//	void Push(const DataType& data)
//	{
//		// CheckCapacity();
//		_array[_size] = data;
//		_size++;
//	}
//	~Stack()
//	{
//		if (_array)
//		{
//			free(_array);
//			_array = nullptr;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//private:
//	DataType* _array;
//	size_t _size;
//	size_t _capacity;
//};
//int main()
//{
//	Stack s1;
//	s1.Push(1);
//	s1.Push(2);
//	s1.Push(3);
//	s1.Push(4);
//	Stack s2(s1);
//	return 0;
//}

//class Date
//{
//public:
//	Date(int year = 0, int month = 0, int day = 0)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//	void printf()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
////private:
//	int _year;//声明
//	int _month;
//	int _day;
//};
//struct Date_
//{
//	int _year;
//	int _month;
//	int _day;
//};
//
//bool operator==(const Date& x1,const  Date& x2)//比较相等
//{
//	return x1._year == x2._year
//		&& x1._month == x2._month
//		&& x1._day == x2._day;
//}
//
//int operator-(Date x1, Date x2)//相减
//{
//
//}
//int main()
//{
//	Date d1(2022, 8, 29);
//	Date d2(2022, 8, 29);
//
//	
//	
//
//
//	return 0;
//}

class Date
{
public:
	Date(int year = 0, int month = 0, int day = 0)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	void printf()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
//private:
	int _year;//声明
	int _month;
	int _day;
};
struct Date_
{
	int _year;
	int _month;
	int _day;
};

bool operator==(const Date& x1,const  Date& x2)//比较相等
{
	return x1._year == x2._year
		&& x1._month == x2._month
		&& x1._day == x2._day;
}

int operator-(Date x1, Date x2)//相减
{

}
int main()
{
	Date d1(2022, 8, 29);
	Date d2(2022, 8, 29);

	
	


	return 0;
}
