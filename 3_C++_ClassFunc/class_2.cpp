#define  _CRT_SECURE_NO_WARNINGS
#include "class2.h"

class A
{
public:
	A() {}//无参的构造函数
	A(int a)//带参数的构造函数
	{
		_a = a;
	}
	//A(int a = 10)//用户自定义生成的构造函数
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