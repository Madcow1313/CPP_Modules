#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default")
{
	this->name = "Default Scav";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

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

ScavTrap::ScavTrap(ScavTrap const &other)
{
	std::cout << "ScavTrap copied self" << std::endl;
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;	
}

ScavTrap & ScavTrap::operator=(ScavTrap const &other)
{
	std::cout << "ScavTrap has changed his name (assignment happened)" << std::endl;
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
	return (*this);	
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