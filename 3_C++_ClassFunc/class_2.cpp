#define  _CRT_SECURE_NO_WARNINGS
#include "class2.h"
//
//class A
//{
//public:
//	A() {}//�޲εĹ��캯��
//	A(int a)//�������Ĺ��캯��
//	{
//		_a = a;
//	}
//	//A(int a = 10)//�û��Զ������ɵĹ��캯��
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
//	A() {}//�޲εĹ��캯��
//	A(int a)//�������Ĺ��캯��
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
//	//�ڵ����޲����Ĺ��캯�����������ʱ����Ҫ�����ţ�����ͳ��˺�������
//	//���»�������棺warning C4930: ��A a3(void)��: δ����ԭ�ͺ���(�Ƿ��������ñ��������?)
//	A a3();
//	return 0;
//}


class A
{
public:
	A(int a)//�û��Զ����Ĭ�Ϲ��캯��
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