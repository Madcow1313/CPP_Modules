#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		~MutantStack();
		MutantStack( MutantStack const &other );
		MutantStack & operator=( MutantStack const &other );

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return (this->c.begin());
		}
		iterator end()
		{
			return (this->c.end());
		}

		T &operator[]( size_t n )
		{
			return (this->c.at(n));
			//return (this->c[n]);
			//return (*(this->c.begin() + n));
		}
};


template<class T>
MutantStack<T>::MutantStack()
{
}

template<class T>
MutantStack<T>::~MutantStack()
{
}

template<class T>
MutantStack<T>::MutantStack( MutantStack const &other ) : std::stack<T>()
{
	*this = other;
}

template<class T>
MutantStack<T> & MutantStack<T>::operator=( MutantStack const &other )
{
	this->c = other.c;
	return(*this);
}

#endif