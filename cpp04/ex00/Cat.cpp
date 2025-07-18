#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << BOLD_GREEN << "Cat Default Constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat &cpy) : Animal()
{
	std::cout << BOLD_GREEN << "Cat Copy Constructor called" << RESET << std::endl;
	*this = cpy;
}

Cat& Cat::operator=(const Cat& assign)
{
	if (this != &assign)
		this->type = assign.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << BOLD_GREEN << "Cat Destructor called" << RESET << std::endl;
}

void Cat::makeSound() const
{
	std::cout << BOLD_WHITE << "Cat: 🐱 Meow! Meow!" << RESET << std::endl;
}
