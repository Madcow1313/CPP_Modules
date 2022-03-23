#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

class HumanA
{
private:
	Weapon &weapon;
	std::string	name;
	std::string type;	
public:
	HumanA( std::string new_name, Weapon &new_weapon );
	~HumanA();
	void attack();
};
#endif