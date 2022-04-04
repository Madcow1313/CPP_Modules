#include "Cat.hpp"

Cat::Cat() : Animal::Animal()
{
	this->type = "Cat";
	std::cout << "It's a cute and fluffy " << this->type << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat is no more interested in you" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meeoooooowww" << std::endl;
}

Cat::Cat(Cat const &other)
{
	*this = other;
}

Cat &Cat::operator=(Cat const &other)
{
	this->type = other.type;
	return (*this);
}

