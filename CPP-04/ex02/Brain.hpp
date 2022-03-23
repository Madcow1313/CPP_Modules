#ifndef BRAIN_HPP
#define BRAIN_HPP
#include "Animal.hpp"

class Brain
{
	public:
		Brain();
		~Brain();
		Brain( Brain const & other);
		Brain & operator=( Brain const & other);
		std::string *getIdeas();
	private:
		std::string ideas[100];
};


#endif