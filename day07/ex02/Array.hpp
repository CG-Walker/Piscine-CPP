#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
public:
	// Constructors & Destructor
	Array() : _size(1) {_array = new T[0];}
	Array(unsigned int n) : _size(n) {_array = new T[n];}
	Array(Array const & ref) : _size(ref.size())
	{
		T * tmp = ref.getArray();
		_array = new T[_size];
		for (size_t i = 0; i < _size; i++)
			_array[i] = tmp[i];
	}
	~Array() {delete [] _array;}

	// Operator Overload
	Array & operator=(Array const & rhs)
	{
		T * tmp = rhs.getArray();
		if (_array)
			delete [] _array;
		_size = rhs.size();
		_array = new T[_size];
		for (size_t i = 0; i < _size; i++)
			_array[i] = tmp[i];
		return *this;
	}

	T & operator[](size_t i)
	{
		if (i >= _size)
			throw std::exception();
		else
			return *(_array + i);
	}

	unsigned int 	size() const {return _size;}
	T *				getArray() const {return _array;}

private:
	T *				_array;
	unsigned int	_size;
};

 #endif