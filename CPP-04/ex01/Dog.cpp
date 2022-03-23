#include "Dog.hpp"

Dog::Dog() : Animal::Animal()
{
	this->type = "Dog";
	this->AnimalBrain = new Brain();
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

Dog &Dog::operator=(Dog const &other)
{
	this->type = other.type;
	this->AnimalBrain = new Brain(*other.AnimalBrain);
	return (*this);
}

Brain *Dog::getBrain()
{
	return (this->AnimalBrain);
}