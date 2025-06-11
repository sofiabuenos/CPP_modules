#include "Zombie.hpp"

Zombie::Zombie(std::string name):_name(name)
{
	std::cout << "Zombie " << _name << " successfully created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " successfully destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}