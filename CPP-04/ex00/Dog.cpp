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

void	Dog::makeSound() const
{
	std::cout << "Wuf-Wuf" << std::endl;
}