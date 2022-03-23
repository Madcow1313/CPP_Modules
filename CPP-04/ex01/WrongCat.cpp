#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal::WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "It's a cute and fluffy " << this->type << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat is no more interested in you" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meeoooooowww shit" << std::endl;
}