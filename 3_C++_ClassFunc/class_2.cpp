#define  _CRT_SECURE_NO_WARNINGS
#include "class2.h"

class A
{
public:
	A() {}//�޲εĹ��캯��
	A(int a)//�������Ĺ��캯��
	{
		_a = a;
	}
	//A(int a = 10)//�û��Զ������ɵĹ��캯��
	//{
	//	this->_a = a;
	//	cout << "A(int a = 10)" << _a << endl;
	//}
private:
	int _a;
};

int main()
{
	A aa1(1);
	return 0;
}