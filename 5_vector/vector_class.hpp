#pragma once
#include <iostream>
#include <vector>


namespace myvector
{
	template <typename T>
	class myvct
	{
		typedef T value_type;
		typedef value_type* iterator;
		typedef const value_type* const_iterator;
	public:

		//myvct<int> s1[10]
		myvct(int n,const T& value)
		{
			_start = new[n];
			_finish = _start + n;
			_end_of_storage = _finish;
		}
	private:
		iterator _start;
		iterator _finish;
		iterator _end_of_storage;
	};
}