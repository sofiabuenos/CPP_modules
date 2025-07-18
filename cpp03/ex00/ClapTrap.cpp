#include "ClapTrap.hpp"

// ======== Constructors ======== //
ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << BOLD_CYAN << "Default Constructor called of ClapTrap" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << BOLD_CYAN << "ClapTrap " << name << " constructed!" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << BOLD_CYAN << "Copy Constructor of ClapTrap called" << RESET << std::endl;
	*this = src;
}

// ======== Destructor ======== //
ClapTrap::~ClapTrap()
{
	std::cout << BOLD_CYAN << "ClapTrap " << name << " destroyed" << RESET << std::endl;
}

// ======== Operators ======== //
ClapTrap& ClapTrap::operator=(const ClapTrap& assign)
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

// ======== Member Functions ======== //
std::string ClapTrap::getName() const
{
	return (this->name);
}

int ClapTrap::getHitPoints() const
{
	return (this->hitPoints);
}

int ClapTrap::getEnergyPoints() const
{
	return (this->energyPoints);
}

int ClapTrap::getAtackDamage() const
{
	return (this->attackDamage);
}

void ClapTrap::attack(const std::string& target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints--;
		std::cout << "ClapTrap " << name << " attacks " << target
				  << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << name << " can't attack. No energy or hit points available"
				  << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints >= static_cast<int>(amount))
	{
		hitPoints -= amount;
		std::cout << "Oh no! ClapTrap " << name << " got hit and lost " << amount 
				  << " hit points 🥲 ! " << name << " only has " << this->hitPoints << " left. Ouch!" << std::endl;
	}
	else if (hitPoints > 0 && hitPoints < static_cast<int>(amount))
	{
		hitPoints = 0;
		std::cout << "Oh no! ClapTrap " << name << " got hit and lost all its remaining hit points 😵" << std::endl;
	}
	else
		std::cout << "Oh no! ClapTrap " << name << " is trapped - No hit points left 🥲" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints > 0)
	{
		energyPoints--;
		hitPoints += amount;
		std::cout << "Yay! ClapTrap " << name << " repaired itself by " << amount
				  << " hit points! it now has " << this->hitPoints << ". Back in action! 🤖🔧" << std::endl;
	}
	else
		std::cout << "Oh no! ClapTrap " << name << " is trapped - No energy points left 🥲" << std::endl;
}
