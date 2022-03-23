
#include "Serialize.hpp"

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	Data shit;

	shit.number = 100;
	shit.string = "shit";
	std::cout << "_________" << "before" << "__________" << std::endl;
	
	std::cout << shit.number << " and " << shit.string << std::endl;

	uintptr_t ptr = serialize(&shit);

	Data *shit2 = deserialize(ptr);
	
	std::cout << "_________" << "after" << "__________" << std::endl;
	std::cout << shit2->number << " and " << shit2->string << std::endl;
}