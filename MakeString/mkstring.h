#pragma once
#include <iostream>
#include <ostream>
#include <assert.h>


namespace dhs
{
	class String
	{
	public:
		String(const char* s = "")//���캯��(1)
		{
			_size = strlen(s);
			_capacity = _size;
			_str = new char[_capacity + 1];

			strcpy(_str, s);
		}

		String(const String& s)//��������(2)
			:_size(s._size)
			, _capacity(s._capacity)
		{
			_str = new char[_capacity + 1];
			strcpy(_str, s._str);
		}

		String& operator=(const String& s)//��=�����������(3)
		{
			String tmp(s);
			
			return tmp;
		}

		~String()//��������(4)
		{
			delete[] _str;
			_str = nullptr;
			_capacity = _size = 0;
		}

		size_t size() const//�õ���С��5��
		{
			return _size;
		}

		size_t capacity() const//�õ�������6��
		{
			return _capacity;
		}

		const char& operator[](size_t num)const//[]���������ֻ����7��
		{
			assert(num < _size);
			return _str[num];
		}

		char& operator[](size_t num)//[]��������ؿ�д��7��
		{
			assert(num < _size);
			return _str[num];
		}

		void reserve(size_t n)//���ַ������ȵ������ƻ��Ĵ�С��9��
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

		void push_back(char ch)//�ַ���β�壨10��
		{
			if (_capacity <= _size + 1)
			{
				reserve(_capacity == 0 ? 4 : _capacity * 2);
			}
			_str[_size] = ch;
			_size++;
			_str[_size] = '\0';
		}


		String& operator+=(const String& s)//+=���������(11)
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

		String& append(const String& s)//��ĩ���루12��
		{
			*this += s;
			return *this;
		}

		typedef char* iterator;
		iterator begin()//�������ɶ���13��
		{
			return _str;
		}
		iterator end()
		{
			return _str + _size;
		}

		typedef const char* const_iterator;
		const_iterator begin()const//��������д��13��
		{
			return _str;
		}
		const_iterator end()const
		{
			return _str + _size;
		}


		String& insert(size_t pos, const String& str)//��posλ�ò����ַ�����15��
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

		String& insert(size_t pos, const char ch)//��posλ�ò����ַ�
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

		String& erase(size_t pos = 0, size_t len = -1)//��posλ��ɾ��len���ȵ����ݣ�16��
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
		
		String& clean()//����ַ�����������ݣ�17��
		{
			erase();
			return *this;
		}


	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};

	std::ostream& operator<<(std::ostream& out, const String& s)//"<<"����ȡ���أ�8��
	{
		for (size_t i = 0; i < s.size(); i++)
		{
			out << s[i];
		}
		return out;
	}

	std::istream& operator>>(std::istream& in,String& s)//">>"���������أ�14��
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