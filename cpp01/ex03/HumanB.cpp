#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	this->weapon = NULL;
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
	return ;
}

void HumanB::attack()
{
	if (!weapon)
		std::cout << this->name << " ** claims for mercy **" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	return ;
}