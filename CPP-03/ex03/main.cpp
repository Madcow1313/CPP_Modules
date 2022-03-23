#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap Robot("Robot");

	Robot.whoAmI();
	//Robot.printAll();
	Robot.attack("shit");
	Robot.takeDamage(50);
	Robot.beRepaired(50);
	Robot.highFivesGuys();
	Robot.GuardGate();
	Robot.takeDamage(99);
	Robot.beRepaired(1);
}
