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

std::string Animal::getType() const
{
	return (this->type);
}


Animal::Animal(Animal const &other)
{
	//std::cout << "Clap trap copied itself" << std::endl;
	//this->type = other.type;
	*this = other;
}

Animal &Animal::operator=(Animal const &other)
{
	//std::cout << "Clap trap has changed his name (assignment happened)" << std::endl;
	this->type = other.type;
	return (*this);
}