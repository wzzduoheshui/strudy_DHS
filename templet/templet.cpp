#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;



//void Swap(int& left, int& right)
//{
//	int temp = left;
//	left = right;
//	right = temp;
//}
//void Swap(double& left, double& right)
//{
//	double temp = left;
//	left = right;
//	right = temp;
//}
//void Swap(char& left, char& right)
//{
//	char temp = left;
//	left = right;
//	right = temp;
//}


//template <typename T>//ģ�������ģ�����ͣ�--�����뺯����������������
////typename �����������������д��������T��Ty��Te����������
//// �����typename����ʹ��class��û�������
////T�������ģ�����ͣ��������ͣ�
//void Swap(T& left, T& right)
//{
//	T temp = left;
//	left = right;
//	right = temp;
//}
//int main()
//{
//	int a = 0, b = 10;
//	cout << a << "   " << b << endl;
//	Swap(a, b);
//	cout << a << "   " << b << endl;
//	char x = 'a', y = 'b';
//	Swap(x, y);
//	cout << x << y << endl;
//
//	return 0;
//}

//template <typename T>
//T add(T l, T r)
//{
//	return l + r;
//}
//int main()
//{
//	//int a = add(1, 2);//3
//	//double a = add(1.1, 2.2);//3.3
//	//int a = add(1.1, 2.2);//3
//	//double a = add(1, 2);//3
//	//double a = add(1.1, 2);
//
//	int a = add(1, (int)2.2);
//	double b = add<double>(1.2, 1);
//	cout << a << "--" << b << endl;
//	return 0;
//}


//template <typename T>
//T add(T l, T r)
//{
//	return l + r;
//}
//template <typename T1,typename T2>
//T1 add(T1 l, T2 r)
//{
//	return l + r;
//}
//int main()
//{
//	//�������Զ����ݣ���ʽʵ����
//	int a = add(1, (int)2.2);
//	//��ʾʵ����
//	double b = add<double>(1.2, 1);
//	cout << a << "--" << b << endl;
//	//ʹ������typename
//	double x = add(1, 1.1);
//	cout << x << endl;
//	return 0;
//}



//template <typename T>
//T* Func(int n)//���ֺ���������ֱ�ӵ��ã���Ϊ�������޷��ж�������Ҫ�ķ�������
//{
//	T* a = new T[n];
//	return a;
//}
//int main()
//{
//	int* L1 = Func(10);
//	int* L2 = Func<int>(10);
//	return 0;
//}


template <typename T>
T add(T l, T r)
{
	cout << "T add();" << endl;
	return l + r;
}
int add(int l, int r)
{
	cout << "int add();" << endl;
	return l + r;
}
int main()
{
	int a = add(1, (int)2.2);
	double b = add<double>(1.2, 1);
	int c = add(1, 2);
	return 0;
}