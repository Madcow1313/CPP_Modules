#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iomanip>
#include <iostream>

class ScavTrap : public virtual ClapTrap
{
	public:
		void GuardGate();
		void attack( const std::string& target );
		ScavTrap( std::string trapName );
		ScavTrap();
		~ScavTrap();
		ScavTrap(ScavTrap const &other);
		ScavTrap & operator=(ScavTrap const &other);
};


#endif