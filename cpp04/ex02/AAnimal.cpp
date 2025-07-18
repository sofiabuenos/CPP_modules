#include "AAnimal.hpp"

// Constructors
AAnimal::AAnimal() : type("Undefined")
{
	std::cout << BOLD_CYAN << "AAnimal default Constructor called" << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	std::cout << BOLD_CYAN << "AAnimal Copy Constructor called" << RESET << std::endl;
	*this = copy;
}


// Destructor
AAnimal::~AAnimal()
{
	std::cout << BOLD_CYAN << "AAnimal Destructor called" << RESET << std::endl;
}


// Operators
AAnimal& AAnimal::operator=(const AAnimal &assign)
{
	if (this != &assign)
		this->type = assign.type;
	return (*this);
}

std::string AAnimal::getType(void) const
{
	return (this->type);
}

void AAnimal::makeSound() const
{
	std::cout << BOLD_WHITE << this->type << ": 🐾 #@%!77KASDFDIE -- mysterious, unidentifiable sound!" << RESET << std::endl;
}

std::string AAnimal::getIdea(int) const
{
	std::cout << BOLD_YELLOW << "No brain, no ideas! 🤔 (Maybe try a Dog or Cat?)" << RESET << std::endl;
	return "";
}

void AAnimal::setIdea(int, const std::string&)
{
	std::cout << BOLD_YELLOW << "No brain, no ideas! 🤔 (Maybe try a Dog or Cat?)" << RESET << std::endl;
}

const Brain* AAnimal::getBrainPtr(void) const
{
	std::cout << BOLD_YELLOW << "No brain! 🤔 (Maybe try a Dog or Cat?)" << RESET << std::endl;
	return (NULL);
}