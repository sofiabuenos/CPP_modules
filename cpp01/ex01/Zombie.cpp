#include "Zombie.hpp"

Zombie::Zombie ()
{
	std::cout << BOLD_CYAN << "A fresh zombie has joined the horde! Beware!" << RESET << std::endl;
	return ;
}

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << BOLD_CYAN << "Zombie " << _name << " has joined the horde! Beware!" << RESET << std::endl;
}

Zombie::~Zombie()
{
	std::cout << BOLD_MAGENTA << "Zombie " << _name << " successfully destroyed" << RESET << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}