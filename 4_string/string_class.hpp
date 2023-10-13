#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::ostream;

namespace MyString
{
	class mstr
	{
	public:
		friend ostream& operator<<(ostream& cout, const mstr& str);//cout
		friend ostream& operator>>(ostream& cin, const mstr& str);//cin

		mstr(const char* str = "")//构造
		{
			_size = strlen(str);
			_capacity = _size;
			cout << "mstr(const char* str = "")" << str << "size:" << _size << endl;
			_str = new char[_capacity + 1];
			memcpy(_str, str, _size);
			_str[_size + 1] = '\0';
		}

		//mstr(const mstr& str)//拷贝构造
		//{
		//	this->_capacity = str._capacity;
		//	this->_size = str._size;
		//	this->_str = new char[_capacity+1];
		//	memcpy(_str, str._str, _capacity);
		//}

		// 拷贝构造
		void mswap(mstr& str)
		{
			//cout << str._size << "   " << str._capacity << "    " << str._str << endl;
			std::swap(this->_str, str._str);
			std::swap(this->_capacity, str._capacity);
			std::swap(this->_size, str._size);
		}
		mstr(const mstr& str)
			:_str(nullptr)
			,_size(0)
			,_capacity(0)
		{
			cout << "mstr(const mstr& str):" << str._str << endl << "size" << str._size << "capacity" << str._capacity << endl;
			mstr tmp(str._str);
			//cout << tmp << "size" << tmp._size << "capacity" << tmp._capacity << endl;
			this->mswap(tmp);
		}


		~mstr()//析构
		{
			delete[] _str;
			_size = _capacity = 0;
		}

		mstr operator+=(const mstr& str)//+=
		{
			mstr new_str;
			new_str._capacity = str._capacity + this->_capacity + 1;
			new_str._str = new char[new_str._capacity];
			new_str._size = _size + str._size;
			
			memcpy(new_str._str, _str, _capacity);
			for (int i = 0; i < str._capacity; i++)
			{
				new_str._str[_capacity + i] = str._str[i];
			}
			cout << endl << new_str << endl;
			return new_str;
		}

		size_t getsize()//获取size
		{
			return this->_size;
		}

		size_t getcapacity()//获取capacity
		{
			return this->_capacity;
		}

		void swap(mstr str)
		{
			
		}

	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};

	inline ostream& operator<<(ostream& cout, const mstr& str)
	{
		for (int i = 0; i < str._size; i++)
		{
			cout << str._str[i];
		}
		return cout;
	}

	inline ostream& operator>>(ostream& cin, const mstr& str)
	{
		mstr buffe;
		

	}

}