#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap( std::string trapName );
		~FragTrap();
		void highFivesGuys(void);
		FragTrap();
		FragTrap(FragTrap const &other);
		FragTrap & operator=(FragTrap const &other);
};

#endif