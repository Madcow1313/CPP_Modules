#include "Dog.hpp"

Dog::Dog() : Animal::Animal()
{
	this->type = "Dog";

	std::cout << "It's a big and filthy " << this->type << std::endl;
}

Dog::~Dog()
{
	std::cout << this->type << " started avoid you" << std::endl;
}

Dog::Dog(Dog const &other)
{
	*this = other;
}

Dog &Dog::operator=(Dog const &other)
{
	this->type = other.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Wuf-Wuf" << std::endl;
}