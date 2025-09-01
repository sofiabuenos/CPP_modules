#include "Zombie.hpp"

Zombie::Zombie(std::string name):_name(name)
{
	std::cout << BOLD_CYAN << "Zombie " << _name << " successfully created" << RESET << std::endl;
}

Zombie::~Zombie()
{
	std::cout << BOLD_MAGENTA<< "Zombie " << _name << " successfully destroyed" << RESET << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}