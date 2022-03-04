#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie	*fresh_Zombie;

	fresh_Zombie = new Zombie(name);
	if (!fresh_Zombie)
		return (NULL);
	return (fresh_Zombie);
}