#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

class A
{
public:
	A()
		:_a(nullptr)
		,_size(0)
		,_capacity(0)
	{}



	~A()
	{
		delete[] _a;
		_capacity = _size = 0;
	}
private:
	int* _a;
	size_t _size;
	size_t _capacity;
};

int main()
{

	return 0;
}