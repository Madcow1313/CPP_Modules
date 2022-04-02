#include "Zombie.hpp"

int	main()
{
	Zombie *fresh_Zombie = newZombie("Zombie 1");
	if (!fresh_Zombie)
		return (0);
	fresh_Zombie->announce();
	delete fresh_Zombie;

	randomChump("Zombie 2");
}