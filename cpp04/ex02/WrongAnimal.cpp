#include "WrongAnimal.hpp"

// Constructors
WrongAnimal::WrongAnimal() : type("Undefined")
{
	std::cout << BOLD_CYAN << "WrongAnimal default Constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << BOLD_CYAN << "WrongAnimal Copy Constructor called" << RESET << std::endl;
	*this = copy;
}


// Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << BOLD_CYAN << "WrongAnimal Destructor called" << RESET << std::endl;
}


// Operators
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &assign)
{
	if (this != &assign)
		this->type = assign.type;
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << BOLD_WHITE << this->type << ": 🐾 WRONG-#@%!77KASDFDIE -- mysterious, unidentifiable sound!" << RESET << std::endl;
}

