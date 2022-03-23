#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain is created" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain have done it's work" << std::endl;
}

Brain::Brain(Brain const &other)
{
	*this = other;
	std::cout << "Brain is created via copying" << std::endl;
}

Brain &Brain::operator=( Brain const & other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

std::string *Brain::getIdeas()
{
	return (this->ideas);
}