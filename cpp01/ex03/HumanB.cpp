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
		std::cout << BOLD_MAGENTA << this->name << " ** claims for mercy **" << RESET << std::endl;
	else
		std::cout << BOLD_GREEN <<this->name << " attacks with their " << this->weapon->getType() << RESET << std::endl;
	return ;
}