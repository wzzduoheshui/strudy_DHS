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
		friend ostream& operator<<(ostream& cout, const mstr& str);

		mstr(const char* str = "")
		{
			_size = strlen(str);
			_capacity = _size;
			_str = new char[_capacity + 1];
			memcpy(_str, str, _capacity);
		}

		mstr(const mstr& str)
		{
			this->_capacity = str._capacity;
			this->_size = str._size;
			this->_str = new char[_capacity+1];
			memcpy(_str, str._str, _capacity);
		}

		~mstr()
		{
			delete[] _str;
			_size = _capacity = 0;
		}

		mstr operator+=(const mstr& str)
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

		size_t getsize()
		{
			return this->_size;
		}

		size_t getcapacity()
		{
			return this->_capacity;
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
}