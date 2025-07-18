#include "Animal.hpp"

// Constructors
Animal::Animal() : type("Undefined")
{
	std::cout << BOLD_CYAN << "Animal default Constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << BOLD_CYAN << "Animal Copy Constructor called" << RESET << std::endl;
	*this = copy;
}


// Destructor
Animal::~Animal()
{
	std::cout << BOLD_CYAN << "Animal Destructor called" << RESET << std::endl;
}


// Operators
Animal& Animal::operator=(const Animal &assign)
{
	if (this != &assign)
		this->type = assign.type;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << BOLD_WHITE << this->type << ": 🐾 #@%!77KASDFDIE -- mysterious, unidentifiable sound!" << RESET << std::endl;
}

std::string Animal::getIdea(int) const
{
	std::cout << BOLD_YELLOW << "No brain, no ideas! 🤔 (Maybe try a Dog or Cat?)" << RESET << std::endl;
	return "";
}

void Animal::setIdea(int, const std::string&)
{
	std::cout << BOLD_YELLOW << "No brain, no ideas! 🤔 (Maybe try a Dog or Cat?)" << RESET << std::endl;
}

const Brain* Animal::getBrainPtr(void) const
{
	std::cout << BOLD_YELLOW << "No brain! 🤔 (Maybe try a Dog or Cat?)" << RESET << std::endl;
	return (NULL);
}