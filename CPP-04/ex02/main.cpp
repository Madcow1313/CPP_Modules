#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	//Animal f;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	Animal *array[4];
	for(int i = 0; i < 4; i++)
	{
		if (i % 2)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	for(int i = 0; i < 4; i++)
		array[i]->makeSound();
	for(int i = 0; i < 4; i++)
	{
		delete array[i];
	}
	return (0);

}