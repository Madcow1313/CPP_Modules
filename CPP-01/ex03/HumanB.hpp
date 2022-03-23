#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "HumanA.hpp"

class HumanB
{
private:
	Weapon *weapon;
	std::string	name;
	std::string type;	
public:
	HumanB( std::string new_name );
	~HumanB();
	void setWeapon( Weapon &new_weapon );
	void attack();
};
#endif