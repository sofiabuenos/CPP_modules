#include "ScavTrap.hpp"

// ======== Constructors ======== //
ScavTrap::ScavTrap() : ClapTrap()
{
	this->name = "Default";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << BOLD_GREEN << "Default Constructor called of ClapTrap" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << BOLD_GREEN << "ScavTrap " << name << " constructed!" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap()
{
	std::cout << BOLD_GREEN << "ScavTrap copy constructor called!" << RESET << std::endl;
	*this = src;
}

// ======== Destructor ======== //
ScavTrap::~ScavTrap()
{
	std::cout << BOLD_GREEN << "ScavTrap " << name << " destroyed" << RESET << std::endl;
}

// ======== Operators ======== //
ScavTrap& ScavTrap::operator=(const ScavTrap& assign)
{
	if (this != &assign)
	{
		this->name = assign.name;
		this->hitPoints = assign.hitPoints;
		this->energyPoints = assign.energyPoints;
		this->attackDamage = assign.attackDamage;
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints--;
			std::cout << "ScavTrap " << name << " ferociously attacks " << target
					  << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << name << " can't attack. No energy or hit points left!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gate Keeper mode!" << std::endl;
}
