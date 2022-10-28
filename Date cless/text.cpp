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


//
//#include <iostream>
//
//using namespace std;
//
//class A
//{
//public:
//	static A Getclass()
//	{
//		A so;
//		return so;
//	}
//private:
//	A(int a = 0)
//		:_a(a)
//	{
//	}
//	static int Getnumber()
//	{
//		return _num;
//	}
//private:
//	int _a;
//	static int _num;
//};
//
//int A::_num = 0;
//
//int main()
//{
//	A a1 = A::Getclass();
//
//
//	//A a1(10);
//
//	//cout << a1.Getnumber() << endl;
//	//cout << A(10).Getnumber() << endl;
//	//cout << A::Getnumber() << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
////内部类
//class A
//{
//public:
//	class B//B就是A的内部类（1.收到A的类域限制，访问限定符。2.）
//	{
//	public:
//		B(int b)
//			:_b(b)
//		{
//		}
//		void print(const B& b);
//	private:
//		int _b;
//	};
//	A(int a, int b)
//		:_a(a)
//	{
//		B b1(b);
//	}
//	 static void print(const A& a);
//	
//private:
//	int _a;
//	static int _a2;
//};
//
//int A::_a2 = 0;
//
//void A::print(const A& a)
//{
//	cout << "A->" << a._a << endl;
//}
//
//void A::B::print(const B& b)
//{
//	cout << "_a->" << A::print() << "_a2->"
//}
//int main()
//{
//	cout << sizeof(A) << endl;
//
//	A a1(1, 1);
//	A::B b(1);
//	b.print(b);
//	cout << sizeof(A) << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class W
//{
//public:
//	W()
//	{
//		cout << "W()" << endl;
//	}
//	W(const W& w)
//	{
//		cout << "W(const W& w)" << endl;
//	}
//private:
//	int _w = 0;
//};
//
//W func1()
//{
//	W ret;
//	return ret;
//}
//
//int main()
//{
//	func1();//1次构造，1次拷贝
//	cout << endl << endl;
//	W w1 = func1();//1次构造，2次拷贝--(编译器优化)-->1次构造，1次拷贝
//	cout << endl << endl;
//
//	return 0;
//}