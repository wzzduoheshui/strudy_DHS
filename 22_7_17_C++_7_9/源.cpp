#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
//��׼��Ķ������ŵ�std����ռ䣨�����ռ䣩
using namespace std;


//int main()
//{
//	int i;
//	double d;
//	cin >> i >> d;
//
//	cout << i << endl;
//	cout << d << endl;
//
//	cout << "hello word" << endl;
//
//
//	return 0;
//}

////ȱʡ����
//void Func(int a = 0)
//{
//	cout << a << endl;
//}
//
////ȫȱʡ����
////void TestFunc(int a = 10,int b = 20, int c = 30)
////{
////	cout << "a = " << a << endl;
////	cout << "b = " << b << endl;
////	cout << "c = " << c << endl;
////	cout << endl;
////}
//
////��ȱʡ����
//void TestFunc(int a , int b , int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//	cout << endl;
//}
//
//int main()
//{
//	//TestFunc();//����
//	//TestFunc(1);//����̫����ɴ���
//	TestFunc(1, 2);
//	TestFunc(1, 2, 3);
//
//	//TestFunc();
//	//TestFunc(1);
//	//TestFunc(1, 2);
//	//TestFunc(1, 2, 3);
//
//	//Func(1);
//	//Func(2);
//	//Func(3);
//	//Func();
//
//	return 0;
//}

//int Add(int left, int right)
//{
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	return left + right;
//}
//
//int main()
//{
//	cout << Add(1, 2) << endl;
//	cout << Add(1.2, 2.2) << endl;
//
//	return 0;
//}
////˳��ͬ
//void Func(int right, char left);
//void Func(char right, int left);


//int main()
//{
//	int a = 0;
//	int& b = a;//����
//
//	cout << &b << endl;//ȡ��ַ
//	cout << &a << endl;
//	
//	return 0;
//}

//void swap(int& r1, int& r2)
//{
//	int tmp = r1;
//	r1 = r2;
//	r2 = tmp;
//}
//int main()
//{
//	int a = 0, b = 2;
//	int c = 20, d = 22;
//	swap(a, b);
//	cout << a << endl << b << endl;
//	swap(c, d);
//	cout << c << endl << d << endl;
//
//	int& r1 = a;
//	cout << r1 << endl;
//	r1 = c;
//	cout << r1 << endl;
//	cout << a << endl;
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int& b = a;
//	cout << b <<endl;
//	cout << a + 1 << endl;
//	cout << ++b << endl;
//	cout << b;
//}

//int main()
//{
//	 
//	return 0;
//}

//int& Count()
//{
//	static int n = 1;
//	n++;
//	return n;
//}
//
//int main()
//{
//	int ret = Count();
//	cout << ret;
//	return 0;
//}

//int Count()
//{
//	int n = 1;
//	n++;
//	return n;
//}
//
//int main()
//{
//	int ret = Count();
//	cout << ret;
//	return 0;
//}

//int& Count()
//{
//	int n = 1;
//	n++;
//	return n;
//}
//
//int main()
//{
//	int& ret = Count();
//	printf("%d\n", ret);
//	printf("%d\n", ret);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int& b = a;
//	int c = 100;
//	int d = 200;
//
//	b = c;
//	cout << b << endl;
//	cout << a << endl;
//
//	return 0;
//}

//int main()
//{
//	const int a = 0;
//	//int& b = a;//Ȩ�޷Ŵ󣬱���
//	const int& b = a;//��ȷ
//
//	int c = 0;
//	const int& d = c;//Ȩ����С
//
//	int i = 1;
//	double h = i;//��ʽ����ת��
//	//double& hh= i;//���Ͳ�ͬ������������
//	const double& hhh = i;//�Ӹ�const����
//
//	return 0;
//}

//void func1(int n)
//{
//
//}
//void func2(int& n)
//{
//
//}
//int main()
//{
//	int a = 10;
//	const int b = 20;
//	func1(a);
//	func1(b);
//	func1(30);
//
//	func2(a);
//	//func2(b);//n�޷���Ϊb�ı�����Ȩ�ޣ�
//	//func2(30);//n�޷���Ϊ30�ı�����Ȩ�ޣ�
//
//	return 0;
//}

//int main()
//{
//	//�﷨�Ƕȣ�raû�п��ռ�
//	int a = 10;
//	int& ra = a;
//	ra = 20;
//
//	//�﷨�Ƕȣ�pa����4or8byte�ռ�
//	int* pa = &a;
//	*pa = 20;
//
//	return 0;
//}

