#include "HumanA.hpp"

HumanB::HumanB( std::string new_name )
{
	this->name = new_name;
	this->weapon = NULL;
}

HumanB::~HumanB()
{

}

void HumanB::setWeapon( Weapon &new_weapon )
{
	this->weapon = &new_weapon;
}

void HumanB::attack()
{
	if (this->weapon)
	{
		std::cout << this->name << " attacks with their "
			<< (*(this->weapon)).getType() << std::endl;
	}
	else
	{
		std::cout << this->name << " attacks with their bare hands"
			<< std::endl;
	}
}
