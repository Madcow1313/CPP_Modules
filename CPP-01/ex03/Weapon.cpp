#include "HumanA.hpp"

Weapon::Weapon( std::string type )
{
	setType( type );
}

std::string const &Weapon::getType() const
{
	return (this->type);
};

void Weapon::setType( std::string new_type )
{
	type = new_type;
}

Weapon::~Weapon()
{
}