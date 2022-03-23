#include "ClapTrap.hpp"

int main()
{
	ClapTrap Robot("Shit");

	//ClapTrap Robot2(Robot);

	ClapTrap Robot3("shit2");
	Robot3 = Robot;
	Robot3.attack("enemy");
	Robot3.takeDamage(5);
	Robot3.beRepaired(5);
	Robot3.takeDamage(100000);
	Robot3.attack("ally");
	Robot3.beRepaired(150);
}