#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie	fresh_Zombie(name);

	fresh_Zombie.announce();
	return ;
}