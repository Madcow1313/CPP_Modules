#include "Cat.hpp"

Cat::Cat() : Animal::Animal()
{
	this->type = "Cat";
	this->AnimalBrain = new Brain();
	std::cout << "It's a cute and fluffy " << this->type << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat is no more interested in you" << std::endl;
	if (this->AnimalBrain)
		delete this->AnimalBrain;
}

void	Cat::makeSound() const
{
	std::cout << "Meeoooooowww" << std::endl;
}

Cat::Cat(Cat const &other) : Animal::Animal()
{
	this->AnimalBrain = NULL;
	*this = other;
}

Cat &Cat::operator=(Cat const &other)
{
	std::cout << "Cat has changed his name (assignment happened)" << std::endl;
	this->type = other.type;
	if (this->AnimalBrain == 0)
		this->AnimalBrain = new Brain();
	*(this->AnimalBrain) = *(other.AnimalBrain);
	return (*this);
}

Brain *Cat::getBrain()
{
	return (this->AnimalBrain);
}