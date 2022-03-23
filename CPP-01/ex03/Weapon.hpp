#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "HumanA.hpp"

class Weapon
{
private:
	std::string type;
public:
	Weapon( std::string type );
	~Weapon();
	std::string const &getType() const;
	void setType( std::string new_type );
};


#endif