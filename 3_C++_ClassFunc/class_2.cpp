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


class A
{
public:
	A(int a)//用户自定义的默认构造函数
	{
		_a = a;
	}
private:
	int _a;
};
int main()
{
	A a1(1);
	A a2;
	return 0;
}