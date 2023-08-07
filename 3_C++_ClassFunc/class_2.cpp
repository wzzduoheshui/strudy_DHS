#define  _CRT_SECURE_NO_WARNINGS
#include "class2.h"
//
//class A
//{
//public:
//	A() {}//无参的构造函数
//	A(int a)//带参数的构造函数
//	{
//		_a = a;
//	}
//	//A(int a = 10)//用户自定义生成的构造函数
//	//{
//	//	this->_a = a;
//	//	cout << "A(int a = 10)" << _a << endl;
//	//}
//private:
//	int _a;
//};
//
//int main()
//{
//	A aa1(1);
//	return 0;
//}

//class A
//{
//public:
//	A() {}//无参的构造函数
//	A(int a)//带参数的构造函数
//	{
//		_a = a;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A a1;
//	A a2(1);
//	//在调用无参数的构造函数创建对象的时候不需要加括号，否则就成了函数声明
//	//如下会产生警告：warning C4930: “A a3(void)”: 未调用原型函数(是否是有意用变量定义的?)
//	A a3();
//	return 0;
//}

//
//class A
//{
//public:
//	A(int a)//用户自定义的默认构造函数
//	{
//		_a = a;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A a1(1);
//	A a2;
//	return 0;
//}

//class Time
//{
//public:
//	Time()
//	{
//		cout << "Time()" << endl;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//
//class Date
//{
//public:
//private:
//	int _year;
//	int _month;
//	int _day;
//	Time _t;
//};
//
//int main()
//{
//	Date d1;
//	return 0;
//}


//class Time
//{
//public:
//	Time()
//	{
//		cout << "Time()" << endl;
//	}
//private:
//	int _hour = 0;
//	int _minute = 0;
//	int _second = 0;
//};
//	
//class Date
//{
//public:
//private:
//	int _year;
//	int _month;
//	int _day;
//	Time _t;
//};
//	
//int main()
//{
//	Date d1;
//	return 0;
//}

//class Date
//{
//public:
//	Date()
//	{
//		_year = 1900;
//		_month = 1;
//		_day = 1;
//	}
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//// 以下测试函数能通过编译吗？
//void Test()
//{
//	Date d1;
//}

//class Date
//{
//public:
//	~Date()
//	{
//		cout << "~Date" << endl;                                                                                   
//	}
//private:
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	return 0;
//}


//class Time
//{
//public:
//	~Time()
//	{
//		cout << "~Time" << endl;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//
//class Date
//{
//public:
//private:
//	int _day;
//	Time _t;
//};
//
//int main()
//{
//	Date d1;
//	return 0;
//}


//拷贝构造函数

//class Date
//{
//public:
//	Date(int year = 2000, int month = 1, int day = 1)
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
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	return 0;
//}


//浅拷贝
//class Date
//{
//public:
//	Date(int year = 2000,int month = 1,int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void DPrint()
//	{
//		cout << this->_year << ":" << this->_month << ":" << this->_day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(1, 1, 1);
//	Date d2(d1);
//	d1.DPrint();
//	d2.DPrint();
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
//
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
//	Date(int year, int minute, int day)
//	{
//		cout << "Date(int year, int minute, int day)" << this << endl;
//	}
//	Date(const Date& d)
//	{
//		cout << "Date(const Date& d):" << this << endl;
//	}
//	~Date()
//	{
//		cout << "~Date():" << this << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//Date Test(Date d)//传值传参调用一次拷贝构造
//{
//	Date temp(d);//拷贝构造调用一次拷贝构造
//	return temp;//传值返回调用一次拷贝构造
//}
//int main()
//{
//	Date d1(2022, 1, 13);
//	Test(d1);
//	return 0;
//}


//class Date
//{
//public:
//	Date(int year,int month,int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(const Date& date)
//	{
//		this->_year = date._year;
//		this->_month = date._month;
//		this->_day = date._day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(1, 1, 1);
//	Date d2(d1);
//	Date d3 = d1;
//	return 0;
//}

//class A
//{
//public :
//	A(int a = 1)
//	{
//		_a = a;
//		cout << "A()" << this->_a << "-----" << this << endl;
//	}
//	A(const A& a)
//	{
//		_a = a._a;
//		cout << "A(const A& a)" << this->_a << "-----" << this << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << this->_a << "-----" << this << endl;
//	}
//private:
//	int _a;
//};



//A func1()
//{
//	static A a2(2);
//	return a2;
//}
//A& func2()
//{
//	static A a3(3);
//	return a3;
//}
//int main()
//{
//	A a1(1);
//	func1();
//	func2();
//	return 0;
//}

//
//static A a5(5);
//
//void func2()
//{
//	A a6(6);
//}
//
//void func()
//{
//	A a7(7);
//	func2();
//}
//
//int main()
//{
//	static A a1(1);
//	A a2(2);
//	A a3(3);
//	static A a4(4);
//	func();
//	return 0;
//}




//class Date
//{
//public:
//	Date(int year = 2000, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	bool operator==(const Date& d)
//	{
//		return _year == d._year &&
//			_month == d._month &&
//			_day == d._day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//
//int main()
//{
//	Date d1(2000, 1, 1);
//	Date d2(2000, 1, 1);
//	Date d3(2001, 1, 1);
//	cout << (d1 == d2) << endl;
//	cout << (d1 == d3) << endl;
//	return 0;
//}




//class Date
//{
//public:
//	Date(int year = 2000, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date& operator=(const Date& date)
//	{
//		if (this != &date)
//		{
//			this->_year = date._year;
//			this->_month = date._month;
//			this->_day = date._day;
//		}
//		return *this;
//	}
//	void print()
//	{
//		cout << _year << ":" << _month << ":" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//int main()
//{
//	Date d1(2000, 1, 1);
//	Date d2(2001, 1, 2);
//	Date d3(1111, 1, 1);
//	d2.print();
//	d3 = d2 = d1;
//	d2.print();
//	d3.print();
//	return 0;
//}


//class Date
//{
//public:
//	Date(int year = 2000, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	// 前置++：返回+1之后的结果
//	// 注意：this指向的对象函数结束后不会销毁，故以引用方式返回提高效率
//	Date& operator++()
//	{
//		_day += 1;
//		return *this;
//	}
//	// 后置++：
//	// 前置++和后置++都是一元运算符，为了让前置++与后置++形成能正确重载
//	// C++规定：后置++重载时多增加一个int类型的参数，但调用函数时该参数不用传递，编译器自动传递
//	// 注意：后置++是先使用后+1，因此需要返回+1之前的旧值，故需在实现时需要先将this保存一份,然后给this + 1
//	// 而temp是临时对象，因此只能以值的方式返回，不能返回引用
//	Date operator++(int)
//	{
//		Date temp(*this);
//		_day += 1;
//		return temp;
//	}
//	void print()
//	{
//		cout << _year << ":" << _month << ":" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2000, 1, 1);
//	d1++;
//	d1.print();
//	(d1++).print();
//	(++d1).print();
//	d1.print();
//	return 0;
//}



//class Date
//{
//public:
//	friend ostream& operator<<(ostream& out, const Date& date);
//	Date(int year = 2000, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//inline ostream& operator<<(ostream& out,const Date& date)
//{
//	out << date._year << "年" << date._month << "月" << date._day << "日" << endl;
//	return out;
//}
//
//
//int main()
//{
//	Date d1(2000, 1, 1);
//	Date d2(2001, 1, 1);
//	cout << d1 << d2;
//	return 0;
//}

//
//class Date
//{
//public:
//	Date(int year = 2000, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	bool operator==(const Date& d)const
//	{
//		return _year == d._year &&
//			_month == d._month &&
//			_day == d._day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//
//int main()
//{
//	Date d1(2000, 1, 1);
//	const Date d2(2000, 1, 1);
//	d1.operator==(d2);
//	d2.operator==(d1);
//	return 0;
//}


//class Time
//{
//public:
//	friend ostream& operator<<(ostream& out, const Time& time);
//	Time(int hour = 0, int minute = 0, int second = 0)
//	{
//		_hour = hour;
//		_minute = minute;
//		_second = second;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//
//
//class Date
//{
//public:
//	friend ostream& operator<<(ostream& out, const Date& date);
//	Date(int year = 0, int month = 0, int day = 0, int hour = 0, int minute = 0, int second = 0)
//	{
//		cout << _t << endl;
//		_year = year;
//		_month = month;
//		_day = day;
//		Time t(hour, minute, second);//调用拷贝构造生成临时对象t
//		_t = t;//将t赋值给_t（因为无法在Time类外访问私有成员变量）
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//
//	Time _t;
//};
//
//inline ostream& operator<<(ostream& out, const Time& time)
//{
//	out << time._hour << "时" << time._minute << "分" << time._second << "秒";
//	return out;
//}
//inline ostream& operator<<(ostream& out, const Date& date)
//{
//	out << date._year << "年" << date._month << "月" << date._day << "日";
//	out << date._t << endl;
//	return out;
//}
//
//
//int main()
//{
//	Date d1(2000, 11, 12, 11, 12, 15);
//	cout << d1;
//	return 0;
//}



//class Date
//{
//public:
//	friend ostream& operator<<(ostream& out, const Date& date);
//	Date(int year = 2000, int month = 1, int day = 1)
//		:_year(year)
//		,_month(month)
//		,_day(day)
//	{
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//inline ostream& operator<<(ostream& out, const Date& date)
//{
//	out << date._year << "年" << date._month << "月" << date._day << "日";
//	return out;
//}
//
//int main()
//{
//	Date d1(1, 1, 1);
//	cout << d1;
//	return 0;
//}


//class Time
//{
//public:
//	friend ostream& operator<<(ostream& out, const Time& time);
//	Time(int hour = 0, int minute = 0, int second = 0)
//	{
//		_hour = hour;
//		_minute = minute;
//		_second = second;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//
//
//class Date
//{
//public:
//	friend ostream& operator<<(ostream& out, const Date& date);
//	Date(int year = 0, int month = 0, int day = 0, int hour = 0, int minute = 0, int second = 0)
//		:_year(year)
//		,_month(month)
//		,_day(day)
//		,_t(hour,minute,second)
//	{
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//
//	Time _t;
//};
//
//inline ostream& operator<<(ostream& out, const Time& time)
//{
//	out << time._hour << "时" << time._minute << "分" << time._second << "秒";
//	return out;
//}
//inline ostream& operator<<(ostream& out, const Date& date)
//{
//	out << date._year << "年" << date._month << "月" << date._day << "日";
//	out << date._t << endl;
//	return out;
//}
//
//
//int main()
//{
//	Date d1(2000, 11, 12, 11, 12, 15);
//	cout << d1;
//	return 0;
//}


//class A
//{
//public:
//	void Print() {
//		cout << _a << endl;
//	}
//private:
//	int _a = 0;
//};
//int main() {
//	A().Print();
//	return 0;
//}


//class Solution {
//public:
//	int Sum_Solution(int n) {
//		// ...
//		return 0;
//	}
//};
//
//int main()
//{
//	// 匿名对象 一些使用场景
//	Solution slt;
//	slt.Sum_Solution(10);
//	Solution().Sum_Solution(10);
//
//	return 0;
//}




//class A
//{
//public:
//	void Print() {
//		cout << _a << endl;
//	}
//	int get_a()
//	{
//		this->_a++;
//		return this->_a;//在类成员函数里面可以访问私有静态成员变量_a
//	}
//	static int _b;//声明（公有）
//private:
//	static int _a;//声明（私有）
//};
//int A::_a = 10;//定义
//int A::_b = 20;//定义
//int main() {
//	A a1;
//	A a2;
//	//私有静态成员变量
//	cout << a1.get_a() << endl;
//	cout << a2.get_a() << endl;
//
//	//公有静态成员变量
//	cout << A::_b << endl;
//	cout << a1._b++ << endl;
//	cout << a2._b++ << endl;
//	return 0;
//}



//class A
//{
//public:
//	void Print() {
//		cout << _a << endl;
//	}
//	static int get_a()
//	{
//		return _a;
//	}
//private:
//	static int _a;
//};
//int A::_a = 10;
//
//int main() {
//	cout << A::get_a() << endl;
//	return 0;
//}




//class Time
//{
//	friend class Date; //友元类
//public:
//	//Time(int hour = 0, int minute = 0, int second = 0)
//	//	: _hour(hour)
//	//	, _minute(minute)
//	//	, _second(second)
//	//{}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1, int hour = 1, int minute = 1, int second = 1)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{
//		_t._hour = hour;
//		_t._minute = minute;
//		_t._second = second;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//	Time _t;
//};
//
//int main()
//{
//	Date d1(1, 1, 1, 1, 1, 1);
//	return 0;
//}




//class A
//{
//public:
//	A(int a = 1)
//		:_a(a)
//	{}
//	class B
//	{
//	public:
//		B(int b = 1)
//			:_b(b)
//		{}
//		void f(const A& a)
//		{
//			cout << k << endl;
//			cout << a._a << endl;
//		}
//	private:
//		int _b;
//	};
//private:
//	int _a;
//	static int k;
//};
//int A::k = 3;
//
//int main()
//{
//	cout << sizeof(A) << endl; // 4(A的大小与B无关)
//	A a(1);
//	A::B b(1);//通过限定标示符进行实例化
//	b.f(a);//在f中访问A中的私有成员（友元）
//	A::B().f(1);//匿名对象
//	return 0;
//}



class W
{
public:
	W(int x = 0)
	{
		cout << "W()" << endl;
	}

	W(const W& w)
	{
		cout << "W(const W& w)" << endl;
	}

	W& operator=(const W& w)
	{
		cout << "W& operator=(const W& w)" << endl;
		return *this;
	}

	~W()
	{
		cout << "~W()" << endl;
	}
};

void f1(W w)
{

}

void f2(const W& w)
{

}

int main()
{
	W w1;//1次构造
	cout << endl;
	f1(w1);//1次拷贝构造
	cout << endl;
	f2(w1);//不需要调用构造或者拷贝构造
	cout << endl;
	f1(W()); // 1次构造+1次拷贝构造--优化---直接构造
	cout << endl;
	W w2 = 1;//1次构造（临时变量）+1次拷贝构造---优化--直接构造

	return 0;
}