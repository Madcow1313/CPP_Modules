#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <list>

template<class T>
typename T::iterator easyfind( T t, int i )
{
	class No_result : public std::exception
	{
		const char *what() const throw()
		{
			return ("No match found");
		}
	};
	typename T::iterator result = std::find(t.begin(), t.end(), i );
	if (result == t.end())
		throw(No_result());
	return (result);
}

#endif