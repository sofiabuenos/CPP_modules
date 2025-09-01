
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): name(name), weapon(weapon)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void HumanA::attack()
{
	std::cout << BOLD_CYAN << this->name << " attacks with their " << this->weapon.getType() << RESET<< std::endl;
	return ;
}