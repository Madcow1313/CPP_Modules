#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iomanip>
#include <iostream>

class ClapTrap
{
protected:
	std::string name;
	int hit_points;
	int	energy_points;
	int	attack_damage;
public:
	ClapTrap(std::string trapName);
	~ClapTrap();
	ClapTrap(ClapTrap const &other);
	ClapTrap & operator=(ClapTrap const &other);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif