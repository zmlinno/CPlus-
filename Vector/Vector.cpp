#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<iostream>
#include<cassert>
#include<algorithm>
using namespace std;
//电子
namespace bit
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;

		iterator begin() { return _start };
		iterator end() { return _finish };
		const_iterator cbegin() { return _start };
		const_iterator cend() { return _finish };


		//¹¹Ôìº¯Êý
		vector() :_start(nullptr), _finish(nullptr), _endOfStorage(nullptr){}

		vector(int n, const T& value = T())
		{
			_start = new T[n];
			fill(_start, _start + n, value);
			_finish = _endOfStorage = _start + n;
		}

		template<class InputIterator>
		vector(InputIterator first, InputIterator last)
		{
			size_t n = last - first;
			_start = new T[n];
			copy(first, last, _start);
			_finish = _endOfStorage = _start + n;
		}

		vector(const vector<T>& v)
		{
			size_t n = v.size();
			_start = net T[n];
			copy(v._start, v._finish, _start);
			_finish = _start + n;
			_endOfStorage = _finish;
		}

		vector<T>& operator=(vector<T>v)
		{
			swap(v);
			return *this;
		}

		~vector()
		{
			delete[] _start;
			_start = _finish = endOfStorage = nullptr;

		}

		//ÄÚ´æ
		size_t size()const { return _finish - _start; }
		size_t capacity() { return _endOfStorage - _start; }

		void reserve(size_t n)
		{
			if (n > capacity())
			{
				size_t sz = size();
				T* tep = new T[n];
				copy(_start, _finish, tmp);
				delete[] _start;
				_start = tmp;
				_finish = _start + sz;
				_endOfStorage = _start + n;
			}
		}



		void resize(size_t n, const T& value = T())
		{
			if (n < size())
			{
				_finish = _start + n;
			}
			else
			{
				while (_finish < _start + n)
				{
					*_finish++ = value;
				}
			}
		}

		T& operator[](size_t pos)
		{
			assert(pos < size())
			
			return _start[pos];
		}

		const T& operator[](size_t pos)const
		{
			assert(pos < size());
			return _start[pos];
		}



		void push_back(const T& x)
		{
			if (_finisg == endOfStorage)
			{
				reserve(capacity() == 0 ? 4 : capacity() * 2);
			}
			*_finish++ = x;
		}


		void pop_back()
		{
			assert(size() > 0);
			--_finish;
		}


		void swap(vector<T>& v)
		{
			swap(_start, v._start);
			swap(_finish, v._finish);
			swap(_endOfStorage, v._endOfStorage);
		}

		iterator insert(iterator pos, const T& x)
		{
			assert(pos >= _start && pos <= _finish);
			size_t index = pos - _start;
			if (_finish == endOfStorage)
			{
				reserve(capacity() == 0 ? 4 : capacity() * 2);
			}

			pos = _start + index;
			for (iterator it = _finish; it > pos; --it)
				*it = *(it - 1);
			*pos = x;
			++_finish;
			return pos;
		}


		iterator erase(iterator pos)
		{
			assert(pos >= _start && pos < _finish);
			for (iterator it = pos; it < _finish - 1; ++it)
				*it = *(it + 1);
			--_finish;
			return pos;
		}
		private:
			iterator _start;
			iterator _finish;
			iterator _endOfStorage;
	};
}