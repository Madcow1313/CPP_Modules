#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>

Base::~Base()
{

}


Base *generate()
{
	int	class_type;

	std::srand(time(NULL));
	class_type = std::rand() % 3 + 1;
	switch (class_type)
	{
	case 1:
		return (new A);
	case 2:
		return (new B);
	case 3:
		return (new C);
	
	default:
		return (NULL);
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "it's an A class" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "it's a B class" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "it's a C class" << std::endl;
	
}

/*exception is thrown because there is no null reference and it's always bound to object*/
void identify(Base &p)
{
	A a;
	B b;
	C c;
	try
	{
		a = dynamic_cast<A&>(p);
		std::cout << "it's an A class via reference" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		b = dynamic_cast<B&>(p);
		std::cout << "it's a B class via reference" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		c = dynamic_cast<C&>(p);
		std::cout << "it's a C class via reference" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
}