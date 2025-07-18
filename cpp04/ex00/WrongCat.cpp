#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << BOLD_GREEN << "WrongCat Default Constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal()
{
	std::cout << BOLD_GREEN << "WrongCat Copy Constructor called" << RESET << std::endl;
	*this = cpy;
}

WrongCat& WrongCat::operator=(const WrongCat& assign)
{
	if (this != &assign)
		this->type = assign.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << BOLD_GREEN << "WrongCat Destructor called" << RESET << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << BOLD_WHITE << "WrongCat: 🐱 Wrong-Meow! Wrong-Meow!" << RESET << std::endl;
}
