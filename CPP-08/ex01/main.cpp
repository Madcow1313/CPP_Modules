#include "Span.hpp"

int main()
{
	Span Arr(5);

	try
	{
		Arr.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	Arr.addNumber(10);
	try
	{
		Arr.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Arr.addNumber(-2);
	Arr.addNumber(30);
	Arr.addNumber(40);
	Arr.addNumber(55);

	try
	{
		Arr.addNumber(6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		int i = Arr.longestSpan();
		std::cout << "longest span - " << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		int j = Arr.shortestSpan();
		std::cout << "shortest span - " << j << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (unsigned int i = 0; i < Arr.get_currentsize(); i++)
	{
		std::cout << Arr.get_array()[i] << std::endl;
	}


	std::vector<int> new_el(20000, 10);
	
	new_el[0] = 100;
	new_el[1] = 200;
	new_el[19999] = 123456;
	Arr.addNumber(new_el.begin(), new_el.end());

	std::cout << "after addNumber vector" << std::endl;
	for (unsigned int i = 0; i < Arr.get_currentsize(); i++)
	{
		std::cout << Arr.get_array()[i] << std::endl;
	}
	std::cout << "Final size " << Arr.get_currentsize() << std::endl;

	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}