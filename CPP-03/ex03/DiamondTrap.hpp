#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap :  public ScavTrap, public FragTrap
{
private:
	std::string name;
public:
	DiamondTrap( std::string trapName );
	~DiamondTrap();
	//using ScavTrap::attack;
	void	whoAmI();
	void	printAll();
};


#endif