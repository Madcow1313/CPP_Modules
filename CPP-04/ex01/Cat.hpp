#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain *AnimalBrain;
	public:
		Cat();
		~Cat();
		Cat( Cat const &other);
		Cat & operator=( Cat const &other );
		void makeSound() const;
		Brain *getBrain();
};


#endif