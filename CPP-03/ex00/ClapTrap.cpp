#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string trapName)
{
	std::cout << "Clap trap activated" << std::endl;
	this->name = trapName;
	this->hit_points = 10;
	this->energy_points = 50;
	this->attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Clap trap deactivated" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "Clap trap copied itself" << std::endl;
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	std::cout << "Clap trap has changed his name (assignment happened)" << std::endl;
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energy_points < 1 || this->hit_points < 1)
	{
		std::cout << this->name << " can't attack" << std::endl;
		return ;
	}
	std::cout << this->name << " attacked " << target << ", causing "
		<< this->attack_damage << " points of damage!"  << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " got hit and lost " << amount << " hp" << std::endl;
	this->hit_points -= amount;
	this->energy_points--;
	if (this->hit_points < 0)
		this->hit_points = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points < 1 || this->hit_points < 1)
	{
		std::cout << this->name << " can't repair" << std::endl;
		return ;
	}
	std::cout << this->name << " got repaired" << std::endl;
	this->hit_points += amount;
	this->energy_points--;
	if (this->hit_points > 10)
		this->hit_points = 10;
	std::cout << this->name << " now has " << this->hit_points << " hp" << std::endl;
}