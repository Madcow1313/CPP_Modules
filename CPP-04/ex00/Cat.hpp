#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	~Cat();
	void makeSound() const;
	Cat( Cat const &other);
	Cat & operator=( Cat const &other );
};


#endif