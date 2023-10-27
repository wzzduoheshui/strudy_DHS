#define _CRT_SECURE_NO_WARNINGS
#include "vector_class.hpp"

using namespace myvector;

template <typename T>
void print(const myvct<T>& v)
{
	size_t n = v.getsize();
	for (int i = 0; i < n; i++)
	{
		std::cout << v[i] << " ";
	}
	std::cout << std::endl;
}

void test10()
{
	//std::string s("hello world!");
	//myvct<int> ch(s.begin(), s.end());
	//std::vector<int> v(s.begin(), s.end());


	//myvct<char> c(10, 'a');
	//myvct<char> ch(c.begin(), c.end());
	

	//print(ch);
}

void test9()
{
	//myvct<int> v1(10, { "1","2","3","4" });
	myvct<int> v1(10,1);
	print(v1);
}

void test8()
{
	myvct<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);

	myvct<int> v2(v1);
	print(v2);
}

void test7()
{
	myvct<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);


	myvct<int>::iterator it = v1.begin();
	v1.erase(++it);

	size_t n = v1.getsize();
	for (int i = 0; i < n; i++)
	{
		std::cout << v1[i] << " ";
	}
	std::cout << std::endl;
}

void test6()
{
	myvct<int> v1;
	v1.push_back(1);
	v1.push_back(1);
	v1.push_back(1);
	v1.push_back(1);

	myvct<int>::iterator it = v1.begin();
	for (int i = 0; i <= 10; i++)
	{
		v1.insert(it, i);
		it = v1.begin();
	}

	size_t n = v1.getsize();
	for (int i = 0; i < n; i++)
	{
		std::cout << v1[i] << " ";
	}
	std::cout << std::endl;
}

void test5()
{
	myvct<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);

	size_t n = v1.getsize();
	for (int i = 0; i < n; i++)
	{
		std::cout << v1[i] << " ";
	}
	std::cout << std::endl;

	v1.insert((size_t)0, 0);
	n = v1.getsize();
	for (int i = 0; i < n; i++)
	{
		std::cout << v1[i] << " ";
	}
	std::cout << std::endl;

	v1.insert(2, 2);
	n = v1.getsize();
	for (int i = 0; i < n; i++)
	{
		std::cout << v1[i] << " ";
	}
	std::cout << std::endl;

	v1.insert(8, 7);
	n = v1.getsize();
	for (int i = 0; i < n; i++)
	{
		std::cout << v1[i] << " ";
	}
	std::cout << std::endl;
}


void test4()
{
	myvct<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);

	size_t n = v1.getsize();
	for (int i = 0; i < n; i++)
	{
		std::cout << v1[i] << " ";
	}
	std::cout << std::endl;

	v1.pop_back();
	v1.pop_back();
	v1.pop_back();
	v1.pop_back();
	v1.pop_back();
	v1.pop_back();


	n = v1.getsize();
	for (int i = 0; i < n; i++)
	{
		std::cout << v1[i] << " ";
	}
	std::cout << std::endl;

	std::cout << v1.getsize();
}

void test3()
{
	myvct<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);

	size_t n = v1.getsize();
	for (int i = 0; i < n; i++)
	{
		std::cout << v1[i] << " ";
		v1[i]++;
	}
	std::cout << std::endl;

	for (int i = 0; i < n; i++)
	{
		std::cout << v1[i] << " ";
	}
	std::cout << std::endl;
}

void test2()
{
	myvct<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);

	myvct<int>::const_iterator it = v1.begin();
	while (it < v1.end())
	{
		std::cout << *it << " ";
		it++;
	}
}

void test1()
{
	myvct<int> v1;
	std::cout << v1.getsize() << v1.getcapacity() << std::endl;
}