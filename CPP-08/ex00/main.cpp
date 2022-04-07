#include "easyfind.hpp"

int main()
{
	std::vector<int> a;

	a.push_back(0);
	a.push_back(123);
	a.push_back(1024);
	a.push_back(44546545);

	try
	{
		easyfind(a, 1);
		std::cout << "Found!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	try
	{
		easyfind(a, 123);
		std::cout << "Found!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::vector<char> b;

	b.push_back('0');
	try
	{
		easyfind(b, 48);
		std::cout << "Found!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << "now list" << std::endl;
	std::list<int> c;

	c.push_back(103);
	c.push_back(102);
	c.push_back(105);
	c.push_back(101);
	c.push_back(101);
	try
	{
		easyfind(c, 102);
		std::cout << "Found!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		easyfind(c, 100);
		std::cout << "Found!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}