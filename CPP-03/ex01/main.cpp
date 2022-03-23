#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap Robot("Shit");

	ScavTrap S_Robot("Booty");

	S_Robot.attack("your heart");
	S_Robot.takeDamage(5);
	S_Robot.beRepaired(50);
	S_Robot.GuardGate();
	S_Robot.takeDamage(100);
	S_Robot.attack("my ass");
	S_Robot.beRepaired(50);
	S_Robot.takeDamage(100);
	S_Robot.attack("shit");
	S_Robot.beRepaired(100);
}