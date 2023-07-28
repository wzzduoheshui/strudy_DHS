#define  _CRT_SECURE_NO_WARNINGS

#include <iostream>

namespace my_using
{
	using std::cout;
	using std::cin;
	using std::endl;
}

using namespace my_using;

/************************************/
//命名空间

//命名空间
//using std::cin;
//using std::endl;
//
//int main()
//{
//	std::cout << 1 << std::endl;
//	int a = 0;
//	cin >> a;
//	std::cout << a << std::endl;
//	return 0;
//}
// 
////自定义命名空间
//namespace my_space
//{
//	int num = 100;//命名空间内的变量
//
//	int my_add(int a, int b)//命名空间内的函数
//	{
//		return a + b;
//	}
//
//
//	namespace my_space2
//	{
//		int num2 = 200;
//	}
//
//	void my_swap(int* a, int* b);
//}
//void my_space::my_swap(int* a, int* b)
//{
//	int tmp = 0;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//namespace my_space
//{
//	int num3 = 300;
//}
//void text()
//{
//	for(int a = 0; a <= 10; a++)
//	{
//		my_space::num--;
//	}
//}
//int main()
//{
//	std::cout << "my_space::num = " << my_space::num << std::endl;
//	std::cout << "my_space::my_space2::num2 = " << my_space::my_space2::num2 << std::endl;
//	std::cout << "my_space::num3 = " << my_space::num << std::endl;
//
//
//
//
//	int a = 1;
//	int b = 2;
//	std::cout << "交换前: " << "a=" << a << ";b=" << b << std::endl;
//	my_space::my_swap(&a, &b);
//	std::cout << "交换后: " << "a=" << a << ";b=" << b << std::endl;
//
//	std::cout << "my_space::my_add(my_space::num,b) = " << my_space::my_add(my_space::num, b) << std::endl;
//	
//	text();
//	std::cout << "my_space::my_add(my_space::num,b) = " << my_space::my_add(my_space::num, b);
//
//
//	return 0;
//}

/**********************************/
//缺省参数

//void func(int a = 0)
//{
//	std::cout << a << std::endl;
//}
//int main()
//{
//	func(2);
//	func();
//	return 0;
//}
//全缺省参数
//void print2(int a = 1, int b = 2, int c = 3)
//{
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//}
//int main()
//{
//	print2();
//	return 0;
//}
////半缺省参数
//void print4(int a, int b = 2, int c = 3);
//
//int main()
//{
//	print4(2);
//	return 0;
//}void print4(int a, int b, int c)
//{
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//}

/**********************************/
//函数重载

////形参数量不同
//int add(int a, int b, int c)
//{
//	return a + b + c;
//}
//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	cout << add(1, 2) << endl;
//	cout << add(1, 2, 3) << endl;
//	return 0;
//}
////形参类型不同
//int add(int a, int b)
//{
//	return a + b;
//}
//double add(double a, double b)
//{
//	return a + b;
//}
//int main()
//{
//	cout << add(1, 2) << endl;
//	cout << add(1.1, 2.2) << endl;
//	return 0;
//}
////形参类型顺序不同
//void print(int a, double b)
//{
//    cout << "printid" << endl;
//}
//void print(double a, int b)
//{
//    cout << "printdi" << endl;
//}
//int main()
//{
//    print(1, 1.1);
//    print(1.1, 1);
//    return 0;
//}


/**********************************/
//引用

//void swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("交换前：a=%d ,b=%d\n", a, b);
//	swap(a, b);
//	printf("交换后：a=%d ,b=%d\n", a, b);
//	return 0;
//}
//int& add(int a, int b)
//{
//	static int c = a + b;
//	return c;
//}
//int main()
//{
//	std::cout << add(1, 2) << std::endl;
//	return 0;
//}
//
//int& count(int num)
//{
//	static int c = 0;
//	while (num >= 0)
//	{
//		c++;
//		num--;
//	}
//	return c;
//}
//int main()
//{
//	std::cout << count(10) << std::endl;
//	return 0;
//}
// 
//int& add(int a, int b)
//{
//	int c = 0;
//	cout << &c <<endl;
//	c = a + b;
//	return c;
//}
//int main()
//{
//	int& a = add(1, 2);
//	cout << &a << "     " << a << endl << endl;
//	int& b = add(2, 3);
//	cout << &b << "     " << b << endl << endl;
//	cout << &a << "     " << a << endl << endl;
//	return 0;
//}
//#include <time.h>
//struct A { int a[10000]; };
//void TestFunc1(A a) {}//传值传参
//void TestFunc2(A& a) {}//传引用传参
//void TestRefAndValue()
//{
//	A a;
//	// 以值作为函数参数
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i) 
//		TestFunc1(a);
//	size_t end1 = clock();
//	// 以引用作为函数参数
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//	// 分别计算两个函数运行结束后的时间
//	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//}
//#include <time.h>
//struct A { int a[10000]; };
//A a;
//// 值返回
//A TestFunc1() { return a; }
//// 引用返回
//A& TestFunc2() { return a; }
//void TestReturnByRefOrValue()
//{
//	// 以值作为函数的返回值类型
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc1();
//	size_t end1 = clock();
//	// 以引用作为函数的返回值类型
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc2();
//	size_t end2 = clock();
//	// 计算两个函数运算完成之后的时间
//	cout << "TestFunc1 time:" << end1 - begin1 << endl;
//	cout << "TestFunc2 time:" << end2 - begin2 << endl;
//}
//int main()
//{
//	TestReturnByRefOrValue();
//	return 0;
//}
////指针和引用
//int main()
//{
//	int a = 0;
//	//指针
//	int* b = &a;
//	*b = 1;
//	//引用
//	int& c = a;
//	c = 1;
//
//	cout << "&a:" << &a << endl;
//	cout << "&b(指针):" << &b << endl;
//	cout << "&c(引用):" << &c << endl;
//	return 0;
//}
//权限的放大和缩小
//int main()
//{
//	const int a = 10;
//	int& b = a;
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	double b = a;
//	double& rd = a;//不合法
//	const double& rrd = a;//合法
//	return 0;
//}
