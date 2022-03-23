#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<class T>
void iter(T *address, size_t length, void (*ptrfct)(T const &target))
{
	for (size_t i = 0; i < length; i++)
		ptrfct(address[i]);
}


#endif