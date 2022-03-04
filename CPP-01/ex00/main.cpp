#include "Zombie.hpp"

int	main()
{
	Zombie *fresh_Zombie = newZombie("Zombie 1");
	fresh_Zombie->announce();
	delete fresh_Zombie;

	randomChump("Zombie 2");
}