#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <assert.h>

void test9();

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


		typedef char* iterator;//���������
		typedef const char* const_iterator;//const������

		iterator begin()
		{
			return _str;
		}

		iterator end()
		{
			return _str + _size - 1;
		}

		const_iterator const_begin()const//�������ֺ��const��ʾ�ú���Ϊֻ�������������κγ�Ա�޸�
		{
			return _str;
		}

		const_iterator const_end()const
		{
			return _str + _size - 1;
		}


		mstr(const char* str = "")//����
			:_str(nullptr)
			,_capacity(0)
			,_size(0)
		{
			_size = strlen(str);
			_capacity = _size;
			_str = new char[_capacity + 20];
			strcpy(_str, str);
		}

		//mstr(const mstr& str)//��������
		//{
		//	this->_capacity = str._capacity;
		//	this->_size = str._size;
		//	this->_str = new char[_capacity+1];
		//	memcpy(_str, str._str, _capacity);
		//}

		// ��������
		void mswap(mstr& str)
		{
			std::swap(this->_str, str._str);
			std::swap(this->_capacity, str._capacity);
			std::swap(this->_size, str._size);
		}
		mstr(const mstr& str)
			:_str(nullptr)
			,_size(0)
			,_capacity(0)
		{
			mstr tmp(str._str);
			this->mswap(tmp);
		}


		~mstr()//����
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

			memcpy(new_str._str, _str, _size);

			//mstr new_str;
			//new_str._capacity = str._capacity + this->_capacity + 1;
			//new_str._str = new char[new_str._capacity];
			//new_str._size = _size + str._size;
			//
			//memcpy(new_str._str, _str, _capacity);
			//for (int i = 0; i < str._capacity; i++)
			//{
			//	new_str._str[_capacity + i] = str._str[i];
			//}
			//this->swap(new_str);
			////cout << endl << new_str << endl;
		}

		void erase(size_t pos, size_t len = std::string::npos)
		{
			if (pos >= _size)
			{
				cout << "pos error!" << endl;
			}
			else
			{
				//һֱɾ������β
				if (len == std::string::npos || len >= _size - pos)
				{
					_str[pos] = '\0';
					_size = pos;
				}
				//��ɾ������β���漰Ԫ��Ų��
				else
				{
					strcpy(_str + pos, _str + pos + len);
					_size -= len;
				}
			}
		}

\

		mstr& insert(size_t pos, const mstr& s)
		{
			//�ж�pos�Ƿ�Ϸ�
			if (pos > _size)
			{
				cout << "pos error!" << endl;
			}
			else
			{
            	//���ռ�
				if ((_size + s._size) >= _capacity)
				{
					reserve(_size + s._size);
				}

				//Ų������
				size_t end = _size + s._size;
				while (end >= pos + s._size)
				{
					_str[end] = _str[end - s._size];
					--end;
				}

				//����
				strncpy(_str + pos, s._str, s._size);
				_size += s._size;
			}
			return *this;
		}

		void reserve(size_t n)//����
		{
			if (n > this->_capacity)
			{
				char* tmp = new char[n + 1];
				strcpy(tmp, _str);
				delete[] _str;
				this->_str = tmp;
				this->_capacity = n;
			}
		}

		void resize(const size_t& n, const char& ch = ' ')
		{
			if (n > this->_capacity)
			{
				reserve(_capacity == 0 ? 4 : _capacity * 2);
			}
			if (n > this->_size)
			{
				while (this->_size < n)
				{
					push_back(ch);
				}
			}
			else if (n < this->_size)
			{
				while(this->_size > n)
				{
					pop_back();
				}
			}
		}

		void pop_back()
		{
			if (this->_size > 0)
			{
				this->_str[this->_size--] = '\0';
			}
		}

		void push_back(const char& ch)
		{
			if (this->_size + 1 >= this->_capacity)
			{
				reserve(_capacity == 0 ? 4 : _capacity * 2);
			}
			this->_str[this->_size] = ch;
			this->_str[++this->_size] = '\0';
		}

		mstr operator=(const mstr& str)//=
		{
			mstr tmp(str);
			this->mswap(tmp);
			return *this;
		}

		const char& operator[](size_t n)const
		{
			assert(n < this->_size);
			return _str[n];
		}

		char& operator[](size_t n)
		{
			assert(n < this->_size);
			return _str[n];
		}

		size_t getsize()//��ȡsize
		{
			return this->_size;
		}

		size_t getcapacity()//��ȡcapacity
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