#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
	private:
		T *array;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array( Array const &other );
		Array & operator=( Array const &other );
		T &operator[](unsigned int n);
		unsigned int size() const;
		class exception_throw : public std::exception
		{
			const char *what() const throw();
		};
};

template <class T>
Array<T>::Array()
{
	this->array = new T[0];
	this->_size = 0;

}

template <class T>
Array<T>::Array(unsigned int n)
{
	this->array = new T[n]();
	this->_size = n;
}

template <class T>
Array<T>::~Array()
{
	delete [] this->array;
}

template <class T>
Array<T>::Array( Array const &other )
{
	this->array = new T[other._size];
	this->_size = other._size;
	for (unsigned int i = 0; i < other._size; i++)
	{
		this->array[i] = other.array[i];
	}
}

template <class T>
Array<T> & Array<T>::operator=( Array const &other )
{
	if (this->array)
		delete [] this->array;
	this->array = new T[other._size];
	this->_size = other._size;
	for (unsigned int i = 0; i < other._size; i++)
	{
		this->array[i] = other.array[i];
	}
	return(*this);
}

template <class T>
T & Array<T>::operator[](unsigned int n)
{
	if (this->_size <= n)
		throw (exception_throw());
	return (this->array[n]);
}

template <class T>
const char *Array<T>::exception_throw::what() const throw()
{
	return ("Index is out of range!");
}

template <class T>
unsigned int Array<T>::size() const
{
	return (this->_size);
}

#endif