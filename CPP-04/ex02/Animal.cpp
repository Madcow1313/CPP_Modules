#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Some animal is approaching" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal walks away" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
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
