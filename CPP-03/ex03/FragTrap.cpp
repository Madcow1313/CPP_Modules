#include "FragTrap.hpp"

FragTrap::FragTrap( std::string trapName ) : ClapTrap::ClapTrap(trapName)
{
	std::cout << "FragTrap the son of ClapTrap been born!" << std::endl;
	name = trapName;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << this->name << " FragTrap deactivated" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << this->name << " shouts: Gimme that sweet high five, dude!" << std::endl;
}
