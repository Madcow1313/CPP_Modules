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
	return (0);
}