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
		////��������
		//myvct(const myvct<value_type>& vct)
		//{
		//	size_t capacity = vct._end_of_storage - vct._start;//�����С
		//	size_t size = vct._finish - vct._start;
		//	iterator _newv = new value_type [capacity];//���ٿռ�
		//	memcpy(_newv, vct._start, size);//��������
		//	this->_start = _newv;
		//	this->_finish = _start + size;
		//	this->_end_of_storage = _start + capacity;
		//	_newv = nullptr;
		//}



		//�������� v2(v1)
		myvct(const myvct<value_type>& vec)
		{
			iterator _new_start = new value_type[vec.getcapacity()];//���ٿռ�
			memcpy(_new_start, vec._start, sizeof(value_type) * vec.getsize());//��������
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
				//���ռ�
				if (_finish + 1 >= _end_of_storage)
				{
					//��Ϊ�漰������_start,_finish��λ�ö��ᷢ���ı䵫��pos����
					//��Ӱ�쵽Ų�����ݣ�������Ҫ��¼pos�����λ�ã�pos����_start�ľ��룩
					size_t len = _pos - _start;
					reserve(getcapacity() == 0 ? 4 : getcapacity() * 2);
					_pos = _start + len;
				}

				//Ų������
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
			//���ռ�
			if (_finish + 1 >= _end_of_storage)
			{
				reserve(getcapacity() == 0 ? 4 : getcapacity() * 2);
			}

			//Ų������
			iterator _end = _finish;
			while (_end >= _start + n)
			{
				*(_end) = *(_end - 1);
				_end--;
			}
			_finish++;

			//��������
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
			//assert(n <= npos);//���ٿռ䲻�ܳ������ռ�
			if (n > this->getcapacity())//��Ҫ���ٿռ�
			{
				//iterator _new = new value_type[n];//������ʱ����
				//memcpy(_new, _start, sizeof(value_type)* getsize());//��������  //��ǳ����������  �������ڴ�й¶
				////�������ݵ�ʱ��ǵô�СҪ���������͵Ĵ�С
				//this->_finish = _new + this->getsize();//�ı�ָ��
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

			//�ܵ����_finish==nullptr  ����nullptr+1������Ǵ���
			if (_finish == _end_of_storage)//���ռ�
			{
				reserve(getcapacity() == 0 ? 4 : getcapacity() * 2);//����
			}
			*_finish = x;//�������
			_finish++;
		}

		//������
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


		//�������ݴ�С
		size_t getsize()const
		{
			return _finish - _start;
		}

		//����ռ�����
		size_t getcapacity()const
		{
			return _end_of_storage - _start;
		}

		////����
		myvct()
			:_start(nullptr)
			,_finish(nullptr)
			,_end_of_storage(nullptr)
		{}

		//����
		//vector<int> arr(10,1)
		myvct(size_t num, const value_type& _vec = value_type())
			:_start(nullptr)
			,_finish(nullptr)
			,_end_of_storage(nullptr)
		{
			//�������һ�θո�
			for (int i = 0; i < num; i++)
			{
				push_back(_vec);
			}
		}

		//����
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

		//����
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