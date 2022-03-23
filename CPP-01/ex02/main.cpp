#include <iostream>

int	main()
{
	std::string string = "HI THIS IS BRAIN";

	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Address of string:" << &string << std::endl;
	std::cout << "Address of pointer to string:" << &stringPTR << std::endl;
	std::cout << "Address of reference to string:" << &stringREF << std::endl;

	std::cout << "Value of " << "string " << string << std::endl;
	std::cout << "Value of " << "pointer to string " << *stringPTR << std::endl;
	std::cout << "Value of " << "reference to string " << stringREF << std::endl;

}