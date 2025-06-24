#include "Zombie.hpp"

Zombie::Zombie ()
{
	std::cout << BOLD_WHITE << "One more zombie successfully created" << RESET << std::endl;
	return ;
}

Zombie::Zombie(std::string name):_name(name)
{
	std::cout << BOLD_WHITE << "Zombie " << _name << " successfully created" << RESET << std::endl;
}

Zombie::~Zombie()
{
	std::cout << BOLD_WHITE << "Zombie " << _name << " successfully destroyed" << RESET << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}