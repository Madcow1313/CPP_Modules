#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string trapName ) : ClapTrap::ClapTrap(trapName)
{
	std::cout << "ScavTrap the daughter of ClapTrap been born!" << std::endl;
	this->name = trapName;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap deactivated" << std::endl;
}

void	ScavTrap::attack( const std::string& target )
{
	if (this->energy_points < 1 || this->hit_points < 1)
	{
		std::cout << this->name << " can't attack" << std::endl;
		return ;
	}
	std::cout << "ScavTrap attacks " << target << " and deals "
		<< this->attack_damage << std::endl;
}

void	ScavTrap::GuardGate()
{
	std::cout << this->name << " activated Gate keeper mode" << std::endl;
}
