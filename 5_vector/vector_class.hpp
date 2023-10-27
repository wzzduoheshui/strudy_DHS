#pragma once
#include <iostream>
#include <vector>
#include <string>


void test10();

namespace myvector
{
	template <typename T>
	class myvct
	{
	public:

		typedef T value_type;
		typedef value_type* iterator;
		typedef const value_type* const_iterator;

		////myvct<int> s1[10]
		//myvct(int n,const T& value)
		//{
		//	_start = new[n];
		//	_finish = _start + n;
		//	_end_of_storage = _finish;
		//}
		////拷贝构造
		//myvct(const myvct<value_type>& vct)
		//{
		//	size_t capacity = vct._end_of_storage - vct._start;//计算大小
		//	size_t size = vct._finish - vct._start;
		//	iterator _newv = new value_type [capacity];//开辟空间
		//	memcpy(_newv, vct._start, size);//拷贝数据
		//	this->_start = _newv;
		//	this->_finish = _start + size;
		//	this->_end_of_storage = _start + capacity;
		//	_newv = nullptr;
		//}



		//拷贝构造 v2(v1)
		myvct(const myvct<value_type>& vec)
		{
			iterator _new_start = new value_type[vec.getcapacity()];//开辟空间
			memcpy(_new_start, vec._start, sizeof(value_type) * vec.getsize());//拷贝数据
			_start = _new_start;
			_finish = _start + vec.getsize();
			_end_of_storage = _start + vec.getcapacity();
		}

		//erase
		iterator erase(iterator _pos)
		{
			if (_pos >= _start && _pos <= _finish)
			{
				iterator _begin = _pos;
				while (_begin <= _finish)
				{
					*(_begin) = *(_begin + 1);
					_begin++;
				}
				_finish--;
				return _pos;
			}
		}

		//insert
		void insert(iterator _pos, const value_type x)
		{
			if (_pos >= _start && _pos <= _finish)
			{
				//检查空间
				if (_finish + 1 >= _end_of_storage)
				{
					//因为涉及到扩容_start,_finish的位置都会发生改变但是pos不变
					//会影响到挪动数据，所以需要记录pos的相对位置（pos距离_start的距离）
					size_t len = _pos - _start;
					reserve(getcapacity() == 0 ? 4 : getcapacity() * 2);
					_pos = _start + len;
				}

				//挪动数据
				iterator _end = _finish;
				while (_end >= _pos)
				{
					*(_end) = *(_end - 1);
					_end--;
				}

				*(_pos) = x;
				_finish++;
			}
		}

		//insert
		void insert(const size_t n, const value_type x)
		{
			//检查空间
			if (_finish + 1 >= _end_of_storage)
			{
				reserve(getcapacity() == 0 ? 4 : getcapacity() * 2);
			}

			//挪动数据
			iterator _end = _finish;
			while (_end >= _start + n)
			{
				*(_end) = *(_end - 1);
				_end--;
			}
			_finish++;

			//插入数据
			*(_start + n) = x;
		}

		//pop_back
		void pop_back()
		{
			if (_finish - 1 >= _start)
			{
				_finish--;
			}
		}

		//const operator[]
		const value_type& operator[](size_t n)const
		{
			if (n <= getsize())
			{
				return _start[n];
			}
		}

		//operator
		value_type& operator[](size_t n)
		{
			if (n <= getsize())
			{
				return _start[n];
			}
		}

		//reserve
		void reserve(size_t n)
		{
			//assert(n <= npos);//开辟空间不能超过最大空间
			if (n > this->getcapacity())//需要开辟空间
			{
				//iterator _new = new value_type[n];//定义临时变量
				//memcpy(_new, _start, sizeof(value_type)* getsize());//拷贝数据  //有浅拷贝的嫌疑  还存在内存泄露
				////拷贝数据的时候记得大小要乘数据类型的大小
				//this->_finish = _new + this->getsize();//改变指针
				//this->_end_of_storage = _new + n;
				//this->_start = _new;

				size_t sz = getsize();
				T* tmp = new T[n];
				if (_start)
				{
					for (int i = 0; i < sz; i++)
					{
						tmp[i] = _start[i];
					}

					delete[] _start;
				}

				_start = tmp;
				_finish = _start + sz;
				_end_of_storage = _start + n;

			}
		}

		//push_back
		void push_back(const value_type& x)
		{

			//跑到这里，_finish==nullptr  对于nullptr+1本身就是错误
			if (_finish == _end_of_storage)//检查空间
			{
				reserve(getcapacity() == 0 ? 4 : getcapacity() * 2);//扩容
			}
			*_finish = x;//添加数据
			_finish++;
		}

		//迭代器
		iterator begin()
		{
			return _start;
		}
		iterator end()
		{
			return _finish;
		}
		const_iterator const_begin()const
		{
			return _start;
		}
		const_iterator const_end()const
		{
			return _finish;
		}


		//计算数据大小
		size_t getsize()const
		{
			return _finish - _start;
		}

		//计算空间容量
		size_t getcapacity()const
		{
			return _end_of_storage - _start;
		}

		////构造
		myvct()
			:_start(nullptr)
			,_finish(nullptr)
			,_end_of_storage(nullptr)
		{}

		//构造
		//vector<int> arr(10,1)
		myvct(size_t num, const value_type& _vec = value_type())
			:_start(nullptr)
			,_finish(nullptr)
			,_end_of_storage(nullptr)
		{
			//这里多了一次刚刚
			for (int i = 0; i < num; i++)
			{
				push_back(_vec);
			}
		}

		//构造
		template<typename InputIterator>
		//myvct(const InputIterator& _first, const InputIterator& _end)  //  string
		myvct(InputIterator _first, InputIterator _end)  //  string

			:_start(nullptr)
			,_finish(nullptr)
			,_end_of_storage(nullptr)
		{
			InputIterator _tmp = _first;
			while (_tmp != _end)
			{
				this->push_back(*_tmp);
				_tmp++;
			}
		}

		//析构
		~myvct()
		{
			delete[] _start;
			_finish = _end_of_storage = nullptr;
		}

	private:
		iterator _start;
		iterator _finish;
		iterator _end_of_storage;
	};
}