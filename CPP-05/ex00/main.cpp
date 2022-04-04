#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Member( "Jim", 0);
		std::cout << Member << std::endl;
	}
	catch(std::exception &err)
	{
		std::cerr << err.what() << std::endl;
	}
	Bureaucrat Member( "Jim", 1);
	std::cout << Member << std::endl;
	try
	{
		Member.increaseGrade();
	}
	catch(std::exception &err)
	{
		std::cerr << err.what() << std::endl;
	}
	try
	{
		Bureaucrat Member2( "Jim", 150);
		std::cout << Member2 << std::endl;
		Member2.decreaseGrade();
	}
	catch(std::exception &err)
	{
		std::cerr << err.what() << std::endl;
	}
	std::cout << Member << std::endl;
	try
	{
		Bureaucrat Member3("Carl", 151);
		std::cout << Member3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Bureaucrat Carl;
	std::cout << Carl << std::endl;
	return (0);
}