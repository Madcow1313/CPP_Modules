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
	
}