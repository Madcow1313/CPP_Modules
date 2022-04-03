#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default")
{
	this->name = "Default Frag";
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap( std::string trapName ) : ClapTrap::ClapTrap(trapName)
{
	std::cout << "FragTrap the son of ClapTrap been born!" << std::endl;
	name = trapName;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const &other)
{
	std::cout << "FragTrap copied self" << std::endl;
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;	
}

FragTrap & FragTrap::operator=(FragTrap const &other)
{
	std::cout << "FragTrap has changed his name (assignment happened)" << std::endl;
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
	return (*this);	
}

FragTrap::~FragTrap()
{
	std::cout << this->name << " FragTrap deactivated" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << this->name << " shouts: Gimme that sweet high five, dude!" << std::endl;
}
