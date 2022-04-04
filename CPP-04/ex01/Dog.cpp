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
	if (this->AnimalBrain)
		delete this->AnimalBrain;
}

void	Dog::makeSound() const
{
	std::cout << "Wuf-Wuf" << std::endl;
}

Dog::Dog(Dog const &other)
{
	this->AnimalBrain = NULL;
	*this = other;
}

Dog &Dog::operator=(Dog const &other)
{
	this->type = other.type;
	if (this->AnimalBrain == 0)
		this->AnimalBrain = new Brain();
	*(this->AnimalBrain) = *(other.AnimalBrain);
	return (*this);
}

Brain *Dog::getBrain()
{
	return (this->AnimalBrain);
}