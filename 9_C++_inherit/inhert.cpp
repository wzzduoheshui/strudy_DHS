#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class A
{
public:
	void print()
	{
		cout << "class A :: print()" << endl;
		cout << _a << endl;
	}
	int _a = 0;
};

class B : public A
{
public:
	void print()
	{
		cout << "class B :: print()" << endl;
		cout << _a << endl;
	}
private:
	int _b;
};

int main()
{
	B b;
	b.print();
	b.A::print();
	b._a = 1;
	b.print();
	b.A::print();
	
	return 0;
}