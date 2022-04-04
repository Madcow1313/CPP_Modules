#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		void makeSound() const;
		Dog( Dog const &other );
		Dog & operator=( Dog const &other );
};

#endif