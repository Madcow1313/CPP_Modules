#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain *AnimalBrain;
	public:
		Dog();
		~Dog();
		void makeSound() const;
		Dog( Dog const &other);
		Dog & operator=( Dog const &other );
		Brain *getBrain();
};

#endif