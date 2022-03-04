#include "Zombie.hpp"

int	main()
{
	Zombie *fresh_Zombie = zombieHorde(5, "Zombie");

	for (int i = 0; i < 5; i++)
	{
		fresh_Zombie[i].announce();
	}
	delete [] fresh_Zombie;

}