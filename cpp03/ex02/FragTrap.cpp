#include "FragTrap.hpp"

// ======== Constructors ======== //
FragTrap::FragTrap() : ClapTrap()
{
	this->name = "Default";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << BOLD_GREEN << "Default Constructor called of ClapTrap" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << BOLD_GREEN << "FragTrap " << name << " constructed!" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap()
{
	std::cout << BOLD_GREEN << "FragTrap copy constructor called!" << RESET << std::endl;
	*this = src;
}

// ======== Destructor ======== //
FragTrap::~FragTrap()
{
	std::cout << BOLD_GREEN << "FragTrap " << name << " destroyed" << RESET << std::endl;
}

// ======== Operators ======== //
FragTrap& FragTrap::operator=(const FragTrap& assign)
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

void FragTrap::attack(const std::string& target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints--;
			std::cout << "FragTrap " << name << " ferociously attacks " << target
					  << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "FragTrap " << name << " can't attack. No energy or hit points left!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " throws both hands in the air and shouts: \"High five, anyone? Don't leave me hanging!\"" << std::endl;
}
