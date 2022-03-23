#ifndef BASE_HPP
#define BASE_HPP
#include <iomanip>
#include <iostream>

class Base
{
	public:
		virtual ~Base();
};

Base * generate(void);

void identify(Base* p);

void identify(Base& p);



#endif