#include "string_class.hpp"
using namespace MyString;


void test2()
{
	mstr s1("aaaaa");
	mstr s2("bbbbb");
	cout << s1 << endl << s2 << endl;
	s1 += s2;
	cout << s1 << endl << s2 << endl;
}
void test1()
{
	mstr s1("aaaaa");
	mstr s2("bbbbb");
	cout << s1 << endl << s2 << endl;
	s1 = s2;
	cout << s1 << endl << s2 << endl;
}


int main()
{
	test2();
	return 0;
}

//int main()
//{
//	mstr str("hello world!");
//	//cout << str << endl;
//	//cout << str.getsize() << endl;
//	//cout << str.getcapacity() << endl;
//
//	mstr s2(str);
//	cout << "s2:" << s2 << "size:" << s2.getsize() << endl;
//
//	//mstr s1(str);
//	//cout << s1 << endl;
//	//mstr s2;
//	//cout << s2 << endl;
//	//mstr s3(s2);
//	//cout << s3 << endl;
//	//mstr s1("apple");
//	//cout << s1 << endl;
//	//s1 += str;
//	//cout << s1 << endl;
//	return 0;
//}