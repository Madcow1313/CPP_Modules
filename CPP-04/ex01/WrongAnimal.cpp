#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Some WrongAnimal is approaching" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal walks away" << std::endl;
}
void	WrongAnimal::makeSound() const
{
	std::cout << "What does the WrongFox say? Not today!" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other)
{
	this->type = other.type;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}