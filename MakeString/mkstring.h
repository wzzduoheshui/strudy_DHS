#pragma once
#include <iostream>
#include <ostream>
#include <assert.h>


namespace dhs
{
	class String
	{
	public:
		String(const char* s = "")//构造函数(1)
		{
			_size = strlen(s);
			_capacity = _size;
			_str = new char[_capacity + 1];

			strcpy(_str, s);
		}

		String(const String& s)//拷贝构造(2)
			:_size(s._size)
			, _capacity(s._capacity)
		{
			_str = new char[_capacity + 1];
			strcpy(_str, s._str);
		}

		String& operator=(const String& s)//“=”运算符重载(3)
		{
			String tmp(s);
			
			return tmp;
		}

		~String()//析构函数(4)
		{
			delete[] _str;
			_str = nullptr;
			_capacity = _size = 0;
		}

		size_t size() const//得到大小（5）
		{
			return _size;
		}

		size_t capacity() const//得到容量（6）
		{
			return _capacity;
		}

		const char& operator[](size_t num)const//[]运算符重载只读（7）
		{
			assert(num < _size);
			return _str[num];
		}

		char& operator[](size_t num)//[]运算符重载可写（7）
		{
			assert(num < _size);
			return _str[num];
		}

		void reserve(size_t n)//将字符串长度调整到计划的大小（9）
		{
			if (n > _capacity)
			{
				char* tmp = new char[n+1];
				strcpy(tmp, _str);
				delete[] _str;
				_str = tmp;
				_capacity = n;
			}
		}

		void push_back(char ch)//字符串尾插（10）
		{
			if (_capacity <= _size + 1)
			{
				reserve(_capacity == 0 ? 4 : _capacity * 2);
			}
			_str[_size] = ch;
			_size++;
			_str[_size] = '\0';
		}


		String& operator+=(const String& s)//+=运算符重载(11)
		{
			if (_capacity < s._size + _size)
			{
				reserve(s._size + _size);
			}

			for (size_t i = 0; i < s.size(); i++)
			{
				push_back(s[i]);
			}

			return *this;
		}

		String& operator+=(const char* str)
		{
			append(str);
			return *this;
		}

		String& operator+=(char ch)
		{
			push_back(ch);
			return *this;
		}

		String& append(const String& s)//文末插入（12）
		{
			*this += s;
			return *this;
		}

		typedef char* iterator;
		iterator begin()//迭代器可读（13）
		{
			return _str;
		}
		iterator end()
		{
			return _str + _size;
		}

		typedef const char* const_iterator;
		const_iterator begin()const//迭代器可写（13）
		{
			return _str;
		}
		const_iterator end()const
		{
			return _str + _size;
		}


		String& insert(size_t pos, const String& str)//在pos位置插入字符串（15）
		{
			assert(pos < _size);
			if (_capacity < _size + str._size)
			{
				reserve(_size + str._size);
			}

			size_t end = _size + str._size;
			while (end >= pos + str._size)
			{
				_str[end] = _str[end - str._size];
				end--;
			}
			strncpy(_str + pos, str._str, str._size);
			_size += str._size;

			return *this;
		}

		String& insert(size_t pos, const char ch)//在pos位置插入字符
		{
			assert(pos < _size);
			if (_capacity < _size + 1)
			{
				reserve(_size + 1);
			}

			size_t end = _size + 1;
			while (end >= pos + 1)
			{
				_str[end] = _str[end - 1];
				end--;
			}
			_str[pos] = ch;
			_size += 1;

			return *this;
		}

		String& erase(size_t pos = 0, size_t len = -1)//从pos位置删除len长度的数据（16）
		{
			assert(pos < _size);
			if (len == -1 || pos + len >= _size)
			{
				_str[pos] = '\0';
				_size = pos;
			}
			else
			{
				strcpy(_str + pos, _str + pos + len);
				_size -= len;
			}
			return *this;
		}
		
		String& clean()//清空字符串里面的数据（17）
		{
			erase();
			return *this;
		}


	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};

	std::ostream& operator<<(std::ostream& out, const String& s)//"<<"流提取重载（8）
	{
		for (size_t i = 0; i < s.size(); i++)
		{
			out << s[i];
		}
		return out;
	}

	std::istream& operator>>(std::istream& in,String& s)//">>"流插入重载（14）
	{
		char ch;
		ch = in.get();
		while (ch != ' ' && ch != '\n')
		{
			s += ch;
			ch = in.get();
		}

		return in;
	}
}