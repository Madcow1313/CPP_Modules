#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include "Animal.hpp"
class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal(/* args */);
	virtual ~WrongAnimal();
	WrongAnimal( WrongAnimal const &other);
	WrongAnimal & operator=( WrongAnimal const &other );
	void makeSound() const;
	std::string getType() const;
};

#endif