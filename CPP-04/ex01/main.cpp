#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
Cat k;
	std::cout << "----------------------" << std::endl;
	{
		Cat m = k;
		std::cout << "----------------------" << std::endl;
	}

	k.getBrain();
	std::cout << "----------------------" << std::endl;

	Animal *array[4];
	for(int i = 0; i < 4; i++)
	{
		std::cout << "-------Create---------" << std::endl;
		if (i % 2)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	std::cout << "----------------------" << std::endl;
	for(int i = 0; i < 4; i++)
		array[i]->makeSound();
	for(int i = 0; i < 4; i++)
	{
		std::cout << "-------Delete--------" << std::endl;
		delete array[i];
	}
	std::cout << "----------------------" << std::endl;
	return (0);

}