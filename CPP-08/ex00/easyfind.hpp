#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iomanip>
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

template<class T>
std::vector<int>::iterator easyfind( T t, int i )
{
	class No_result : public std::exception
	{
		const char *what() const throw()
		{
			return ("No match found");
		}
	};
	std::vector<int>::iterator result = std::find(t.begin(), t.end(), i );
	if (result == t.end())
		throw(No_result());
	return (result);
}

#endif