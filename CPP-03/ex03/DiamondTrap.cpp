#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string trapName ) : ClapTrap( trapName + "_clap_name" ),
	ScavTrap(trapName +"_clap_name"), FragTrap( trapName +"_clap_name" )
{
	this->name = trapName;

	this->attack_damage = 30;
	this->energy_points = 50;
	this->hit_points = 100;
	std::cout << this->name << " monster is created by Fragtrap and ScavTrap" << std::endl;
	std::cout << ClapTrap::name << " is " << this->name << " ancestor" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->name << " deactivated" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am " << this->name << " heir of " << ClapTrap::name << std::endl;
}

void	DiamondTrap::printAll()
{
	std::cout << "hit_points " << this->hit_points << std::endl;
	std::cout << "energy points " << this->energy_points << std::endl;
	std::cout << "attack damage " << this->attack_damage << std::endl;
	std::cout << FragTrap::attack_damage << std::endl;
}
