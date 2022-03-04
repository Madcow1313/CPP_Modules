#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Aaaarrrgh..." << std::endl;
	return ;
}

Zombie::~Zombie()
{
	std::cout << _name << " is dead"
		<< std::endl;
	return ;
}

std::string Zombie::get_Zombie_name( void ) const
{
	return (_name);
}

void Zombie::set_Zombie_name( std::string name)
{
	_name = name;
}

void Zombie::announce( void )
{
	std::cout << get_Zombie_name()
		<< ": " << "BraiiiiiiinnnzzzZ..."
		<< std::endl;
}