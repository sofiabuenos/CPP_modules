
#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << BOLD_GREEN << "Dog Default Constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog& cpy) : Animal()
{
	std::cout << BOLD_GREEN << "Dog Copy Constructor called" << RESET << std::endl;
	*this = cpy;
}

Dog& Dog::operator=(const Dog& assign)
{
	if (this != &assign)
		this->type = assign.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << BOLD_GREEN << "Dog Destructor called" << RESET << std::endl;
}

void Dog::makeSound() const
{
	std::cout << BOLD_WHITE << "Dog: 🐶 Woof! Woof! " << RESET << std::endl;
}
