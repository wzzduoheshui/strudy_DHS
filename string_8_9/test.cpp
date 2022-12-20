#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str("Hello bit.");
	cout << str << endl;
	cout << str.size() << ":" << str.capacity() << endl;
	cout << endl;
	str.reserve(111);
	cout << str << endl;
	cout << str.size() << ":" << str.capacity() << endl;
	cout << endl;
	str.resize(5);
	cout << str << endl;
	cout << str.size() << ":" << str.capacity() << endl;
	cout << endl;
	str.resize(10);
	cout << str << endl;
	cout << str.size() << ":" << str.capacity() << endl;
	cout << endl;
	str.reserve(50);
	cout << str << endl;
	cout << str.size() << ":" << str.capacity() << endl;
	return 0;
}