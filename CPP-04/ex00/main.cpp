#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl << "Here the things start" << std::endl;
	const WrongAnimal* feta = new WrongAnimal();
	const WrongAnimal* z = new WrongCat();
	std::cout << z->getType() << " " << std::endl;
	z->makeSound(); //will output the cat sound!
	feta->makeSound();
	delete feta;
	delete z;


	return (0);

}