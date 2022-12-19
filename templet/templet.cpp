#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;



////void Swap(int& left, int& right)
////{
////	int temp = left;
////	left = right;
////	right = temp;
////}
////void Swap(double& left, double& right)
////{
////	double temp = left;
////	left = right;
////	right = temp;
////}
////void Swap(char& left, char& right)
////{
////	char temp = left;
////	left = right;
////	right = temp;
////}
//
//
////template <typename T>//模板参数（模板类型）--类似与函数参数（参数对象）
//////typename 后面是类型名字随便写，可以是T、Ty、Te等任意名字
////// 这里地typename可以使用class是没有区别的
//////T代表地是模板类型（虚拟类型）
////void Swap(T& left, T& right)
////{
////	T temp = left;
////	left = right;
////	right = temp;
////}
////int main()
////{
////	int a = 0, b = 10;
////	cout << a << "   " << b << endl;
////	Swap(a, b);
////	cout << a << "   " << b << endl;
////	char x = 'a', y = 'b';
////	Swap(x, y);
////	cout << x << y << endl;
////
////	return 0;
////}
//
////template <typename T>
////T add(T l, T r)
////{
////	return l + r;
////}
////int main()
////{
////	//int a = add(1, 2);//3
////	//double a = add(1.1, 2.2);//3.3
////	//int a = add(1.1, 2.2);//3
////	//double a = add(1, 2);//3
////	//double a = add(1.1, 2);
////
////	int a = add(1, (int)2.2);
////	double b = add<double>(1.2, 1);
////	cout << a << "--" << b << endl;
////	return 0;
////}
//
//
////template <typename T>
////T add(T l, T r)
////{
////	return l + r;
////}
////template <typename T1,typename T2>
////T1 add(T1 l, T2 r)
////{
////	return l + r;
////}
////int main()
////{
////	//编译器自动推演，隐式实例化
////	int a = add(1, (int)2.2);
////	//显示实例化
////	double b = add<double>(1.2, 1);
////	cout << a << "--" << b << endl;
////	//使用两个typename
////	double x = add(1, 1.1);
////	cout << x << endl;
////	return 0;
////}
//
//
//
////template <typename T>
////T* Func(int n)//这种函数不可以直接调用，因为编译器无法判断我们需要的返回类型
////{
////	T* a = new T[n];
////	return a;
////}
////int main()
////{
////	int* L1 = Func(10);
////	int* L2 = Func<int>(10);
////	return 0;
////}
//
//
////template <typename T>
////T add(T l, T r)
////{
////	cout << "T add();" << endl;
////	return l + r;
////}
////int add(int l, int r)
////{
////	cout << "int add();" << endl;
////	return l + r;
////}
////int main()
////{
////	int a = add(1, (int)2.2);
////	double b = add<double>(1.2, 1);
////	int c = add(1, 2);
////	return 0;
////}
//
////typedef int type;
////void Swap(type& a, type& b)
////{
////	type tmp = a;
////	a = b;
////	b = tmp;
////}
////int main()
////{
////	int a = 10;
////	int b = 20;
////	Swap(a, b);
////	return 0;
////}
//
//
////void Swap(int& a, int& b)
////{
////	int tmp = a;
////	a = b;
////	b = tmp;
////}
////void Swap(double& a, double& b)
////{
////	double tmp = a;
////	a = b;
////	b = tmp;
////}
////int main()
////{
////	int a = 10, b = 20;
////	Swap(a, b);
////	double x = 1.1, y = 2.2;
////	Swap(x, y);
////	return 0;
////}
//
//
////int main()
////{
////	int a = 0;
////	int b = 20;
////	swap(a, b);
////	return 0;
////}


//template <typename T>
//void Swap(T& a,T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(a, b);
//	double x = 1.1;
//	double y = 2.2;
//	Swap(x, y);
//	return 0;
//}


//int Add(const int& left, const int& right)
//{
//	return left + right;
//}
//int main()
//{
//	int a = 10;
//	int b = 10;
//	cout << Add(a, b) << endl;
//	return 0;
//}


//template <typename T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//int main()
//{
//	int a = 10;
//	double b = 1.256;
//	int c = Add(a, (int)b);
//	double d = Add((double)a, b);
//	cout << c << endl;
//	cout << d << endl;
//	return 0;
//}


//template <typename T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//int main()
//{
//	int a = 10;
//	double b = 1.2345;
//	int c = Add<int>(a, b);
//	cout << c << endl;
//	return 0;
//}
//
//
//template <typename T1,typename T2>
//T2 Add(const T1& left, const T2& right)
//{
//	return left + right;
//}
//int main()
//{
//	int a = 10;
//	double b = 1.2345;
//	int c = Add(a, b);
//	cout << c << endl;
//	return 0;
//}

//template <typename T=int>
//T Add(const T& a)
//{
//
//}
//int main()
//{
//	return 0;
//}