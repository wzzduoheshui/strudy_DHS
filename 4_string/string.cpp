#include "string_class.hpp"
using namespace MyString;

int main()
{
	mstr str("hello world!");
	cout << str << endl;
	//mstr s1(str);
	//cout << s1 << endl;
	//mstr s2;
	//cout << s2 << endl;
	//mstr s3(s2);
	//cout << s3 << endl;
	mstr s1("apple");
	cout << s1 << endl;
	s1 += str;
	//cout << s1 << endl;
	return 0;
}