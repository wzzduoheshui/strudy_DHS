//#define  _CRT_SECURE_NO_WARNINGS
//
////#include "Date.h"
////
////void TextDate1()
////{
////	Date d1(2022, 9, 6);
////	d1.Print();
////	(d1 + 1).Print();
////	//d1.Print();
////
////	//d1 -= 100;
////	//d1.Print();
////	//Date d2(d1);//使用默认拷贝构造
////
////	//Date d3(2022, 8, 24);
////	//d1 = d3;//令d1=d3,这里会被转换成d1.operator=(&d1,d3);
////	//d1 = d2 = d3;
////	//Date d2(d1 + 20);
////	//d2.Print();
////	//d1 += 100;
////	//d1.Print();
////}
////
////int main()
////{
////	TextDate1();
////	return 0;
////}
//
//
////#include <iostream>
////
////using namespace std;
////
////class Time
////{
////public:
////	Time(int hour)
////	{
////		_hour = hour;
////	}
////private:
////	int _hour;
////};
////
////class Date
////{
////public:
////	Date(int year,int hour)
////		:_year(year)
////		,_t(hour)
////	{
////	}
////private:
////	int _year;
////	Time _t;
////};
////
////int main()
////{
////	Date d1(20222,1);
////	return 0;
////}
////
////#include <iostream>
////
////#include <string>
////
////using namespace std;
////
////class Date
////{
////public:
////	Date(int year)
////		:_year(year)
////	{
////		cout << "Date(int year)" << endl;
////	}
////	Date(const Date& d)
////	{
////		cout << "Date(const Date& d)" << endl;
////	}
////	~Date()
////	{
////		cout << "~Date()" << endl;
////	}
////	void print(const Date& d)
////	{
////		cout << d._year << endl;
////	}
////private:
////	int _year;
////};
////
////int main()
////{
////
////
////	////如果这里我想调用print函数
////	//Date d1(2222);
////	//d1.print(d1);
////	////但是如果有匿名对象
////	//Date(1).print(2011);
////
////	//Date d1(2022);
////	//Date(2003);//匿名对象，声明周期只有一行,在调用完构造会紧接着调用析构
////	//Date d2(2002);
////
////
////	//Date d1(2022);//直接调用构造函数
////	//Date d2 = 2022;//构造 + 拷贝构造 + 优化 -》调用构造函数
////	////Date& d3 = 2022;//这个会报错，因为这里的引用，引用的是隐式类型转化中的临时变量
////	//const Date& d4 = 2022;//这个不会报错，因为这里的const可以支持引用隐式类型转化中的临时变量（临时变量具有常性）
////	return 0;
////}
//

//
//
//#include <stdio.h>
//using namespace std;
//
//int Text()
//{
//	return 1;
//}
//int main() {
//
//	int arr[10];
//	arr[0] = 5;
//	int i = Text();
//	return 0;
//}



//#include <iostream>
//
//using namespace std;
//
//class A
//{
//public:
//	A(int a)
//		:_a(a)
//	{
//		_num++;
//	}
////private:
//	int _a;//放在所属的类域
//	static int _num;//放在静态区
//};
//
//int A::_num = 0;
//
//int main()
//{
//	A a1(10);
//
//	cout << a1._num << endl;
//	cout << A::_num << endl;
//
//	return 0;
//}



#include <iostream>

using namespace std;

class A
{
public:
	A(int a)
		:_a(a)
	{
		_num++;
	}
	A(const A& a)
		:_a(a._a)
	{
		_num++;
	}
	static int Getnumber()
	{
		return _num;
	}
private:
	int _a;//放在所属的类域
	static int _num;//放在静态区
};

int A::_num = 0;

int main()
{
	A a1(10);

	cout << a1.Getnumber() << endl;
	cout << A(10).Getnumber() << endl;
	cout << A.Getnumber() << endl;

	return 0;
}
