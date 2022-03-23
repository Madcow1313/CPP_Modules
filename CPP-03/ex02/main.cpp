#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap Robot("Shit");

	FragTrap S_Robot("Booty");

	S_Robot.attack("your heart");
	S_Robot.takeDamage(5);
	S_Robot.beRepaired(50);
	S_Robot.highFivesGuys();
	S_Robot.takeDamage(100);
	S_Robot.attack("my ass");
	S_Robot.beRepaired(50);
	S_Robot.takeDamage(100);
	S_Robot.attack("shit");
	S_Robot.beRepaired(100);
}
