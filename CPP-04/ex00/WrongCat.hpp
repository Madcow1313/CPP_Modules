#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	~WrongCat();
	void makeSound() const;
	WrongCat( WrongCat const &other);
	WrongCat & operator=( WrongCat const &other );
};


#endif