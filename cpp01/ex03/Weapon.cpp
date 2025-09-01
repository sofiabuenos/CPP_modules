#include "Weapon.hpp"

Weapon::Weapon()
{
	return ;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
	return ;
}

Weapon::~Weapon()
{
	return ;
}

std::string Weapon::getType() const
{
	return (this->type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
} 

std::ostream& operator<<(std::ostream& os, const Weapon& weapon)
{
	os << weapon.getType();
	return (os);
}