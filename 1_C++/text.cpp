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
//�����ռ�

//�����ռ�
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
////�Զ��������ռ�
//namespace my_space
//{
//	int num = 100;//�����ռ��ڵı���
//
//	int my_add(int a, int b)//�����ռ��ڵĺ���
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
//	std::cout << "����ǰ: " << "a=" << a << ";b=" << b << std::endl;
//	my_space::my_swap(&a, &b);
//	std::cout << "������: " << "a=" << a << ";b=" << b << std::endl;
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
//ȱʡ����

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
//ȫȱʡ����
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
////��ȱʡ����
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
//��������

////�β�������ͬ
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
////�β����Ͳ�ͬ
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
////�β�����˳��ͬ
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
//����

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
//	printf("����ǰ��a=%d ,b=%d\n", a, b);
//	swap(a, b);
//	printf("������a=%d ,b=%d\n", a, b);
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
//void TestFunc1(A a) {}//��ֵ����
//void TestFunc2(A& a) {}//�����ô���
//void TestRefAndValue()
//{
//	A a;
//	// ��ֵ��Ϊ��������
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i) 
//		TestFunc1(a);
//	size_t end1 = clock();
//	// ��������Ϊ��������
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//	// �ֱ���������������н������ʱ��
//	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//}
//#include <time.h>
//struct A { int a[10000]; };
//A a;
//// ֵ����
//A TestFunc1() { return a; }
//// ���÷���
//A& TestFunc2() { return a; }
//void TestReturnByRefOrValue()
//{
//	// ��ֵ��Ϊ�����ķ���ֵ����
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc1();
//	size_t end1 = clock();
//	// ��������Ϊ�����ķ���ֵ����
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc2();
//	size_t end2 = clock();
//	// �������������������֮���ʱ��
//	cout << "TestFunc1 time:" << end1 - begin1 << endl;
//	cout << "TestFunc2 time:" << end2 - begin2 << endl;
//}
//int main()
//{
//	TestReturnByRefOrValue();
//	return 0;
//}
////ָ�������
//int main()
//{
//	int a = 0;
//	//ָ��
//	int* b = &a;
//	*b = 1;
//	//����
//	int& c = a;
//	c = 1;
//
//	cout << "&a:" << &a << endl;
//	cout << "&b(ָ��):" << &b << endl;
//	cout << "&c(����):" << &c << endl;
//	return 0;
//}
//Ȩ�޵ķŴ����С
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
//	double& rd = a;//���Ϸ�
//	const double& rrd = a;//�Ϸ�
//	return 0;
//}
