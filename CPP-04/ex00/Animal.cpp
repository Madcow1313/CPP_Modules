#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Some animal is approaching" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal walks away" << std::endl;
}
void	Animal::makeSound() const
{
	std::cout << "What does the Fox say? Not today!" << std::endl;
}

Animal::Animal(Animal const &other)
{
	*this = other;
}

Animal &Animal::operator=(Animal const &other)
{
	this->type = other.type;
	return (*this);
}

std::string Animal::getType() const
{
	return (this->type);
}