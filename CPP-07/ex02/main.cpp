#include "Array.hpp"

class Awesome
{
	public:
		Awesome(void): _n( 42 ) { return; }
		Awesome(int n): _n(n) { return; }
		int get(void) const { return this->_n; }
	private:
		int _n;
};
std::ostream & operator<<(std::ostream& o, Awesome const & rhs) { o << rhs.get(); return o; }


int main()
{
	Array<int> arr;
	try
	{
		std::cout << "wrong index and empty array check" << std::endl;
		std::cout << arr[1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "assignment and [] check" << std::endl;
	Array<int> arr2(5);

	arr2[0] = 1;
	arr2[1] = 2;
	arr2[2] = 3;
	arr2[3] = 4;
	arr2[4] = 6;

	arr = arr2;
	for (unsigned int i = 0; i < 5; i++)
	{
		arr2[i] += 1;
		std::cout << arr[i] << " ";
		std::cout << arr2[i] << std::endl;
	}
	
	std::cout << "Now string" << std::endl;
	Array<std::string> arr3(3);
	arr3[0] = "shit";
	arr3[2] = "crap";
	for (unsigned int i = 0; i < 3; i++)
	{
		std::cout << arr3[i] << std::endl;
	}
	try
	{
		std::cout << arr3[3] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Even class" << std::endl;
	Array<Awesome> MyAwesomeClass(4);

	MyAwesomeClass[0] = 123456;
	MyAwesomeClass[1] = 42;
	MyAwesomeClass[2] = 3;
	MyAwesomeClass[3] = -2;
	for (unsigned int i = 0; i < 4; i++)
	{
		std::cout << MyAwesomeClass[i] << std::endl;
	}

	std::cout << "Copy constructor and size" << std::endl;

	Array<Awesome> NotSoAwesome(MyAwesomeClass);
	NotSoAwesome[0] = 123;
	for (unsigned int i = 0; i < NotSoAwesome.size(); i++)
	{
		std::cout << NotSoAwesome[i] << " ";
		std::cout << MyAwesomeClass[i] << std::endl;
	}
}