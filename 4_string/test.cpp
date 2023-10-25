#define _CRT_SECURE_NO_WARNINGS
#include "string_class.hpp"

using namespace MyString;

void test9()
{
	mstr s1("1234567890");
	s1.erase(5,3);
	cout << s1;
}

void test8()
{
	mstr s1("aaaaa");
	s1.insert(s1.getsize() , "1234567891");
	cout << s1;
}

void test7()
{
	mstr s1("aaaaa");
	mstr s2("bbbbb");
	cout << s1 << endl;
	s1.insert(0, s2);
	cout << s1 << endl;
}

void test6()
{
	mstr s1("hello");
	cout << s1.getsize() << endl;
	cout << s1.getcapacity() << endl;
	s1.reserve(10);
	cout << s1 << endl;
	cout << s1.getsize() << endl;
	cout << s1.getcapacity() << endl;
}

void test5()
{
	mstr s("hello");
	mstr::iterator it = s.begin();
	while (it != s.end())
	{
		(*it)++;
		cout << *it << " ";
		++it;
	}
	cout << endl;
}

void test4()
{
	mstr s1("hello");
	MyString::mstr::iterator left = s1.begin();
	MyString::mstr::iterator right = s1.end();
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
	cout << s1 << endl;
}

void test3()
{
	mstr s1("aaaaa");
	mstr s2("bbbbb");
	cout << s1 << endl << s2 << endl;
	s1.push_back('a');
	s1.push_back('a');
	s1.push_back('a');
	s1.push_back('a');
	s1.push_back('a');
	s1.push_back('a');
	s1.push_back('a');
	s2.resize(100, 'x');
	cout << s1 << endl << s2 << endl;
}

void test2()
{
	mstr s1("aaaaa");
	mstr s2("bbbbb");
	cout << s1 << endl << s2 << endl;
	s1.pop_back();
	s1.pop_back();
	s1.pop_back();
	s1.pop_back();
	s1.pop_back();
	s1.pop_back();
	s1.pop_back();

	cout << s1 << endl << s2 << endl;
	cout << s1.getsize() << s1.getcapacity();
}
void test1()
{
	mstr s1("aaaaa");
	mstr s2("bbbbb");
	cout << s1 << endl << s2 << endl;
	s1 = s2;
	cout << s1 << endl << s2 << endl;
}
