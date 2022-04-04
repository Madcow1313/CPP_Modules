#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iomanip>
#include <iostream>
#include "Brain.hpp"
class Animal
{
protected:
	std::string type;
public:
	Animal();
	virtual ~Animal();
	Animal( Animal const &other);
	Animal & operator=( Animal const &other );
	virtual void makeSound() const = 0;
	std::string getType() const;
};



#endif
