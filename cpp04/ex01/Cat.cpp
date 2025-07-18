#include "Cat.hpp"

Cat::Cat() : Animal(), catBrain(new Brain())
{
	this->type = "Cat";
	std::cout << BOLD_GREEN << "Cat Default Constructor called" << RESET << std::endl;
}

/*
   This constructor first calls the Animal copy constructor to copy all base class attributes.
   Then, it creates a new Brain object by calling the Brain copy constructor,
   ensuring that the new Cat has its own independent copy of the Brain (deep copy).
   'cpy.catBrain' is the pointer to the Brain object from the Cat being copied.
*/
Cat::Cat(const Cat &cpy) : Animal(cpy), catBrain(new Brain(*cpy.catBrain))
{
	std::cout << BOLD_GREEN << "Cat Copy Constructor called" << RESET << std::endl;
}

/**
 * @brief Assignment operator for Cat class.
 *
 * Performs a deep copy of the given Cat object. It first copies the base Animal part,
 * then deletes the current catBrain (if it exists) and allocates a new Brain object
 * by copying the brain from the assigned Cat using the brain copy operator. This ensures proper resource management
 * and avoids memory leaks or shallow copies.
 *
 * @param assign The Cat object to copy from.
 * @return Reference to the current Cat object.
 */
Cat& Cat::operator=(const Cat& assign)
{
	if (this != &assign)
	{
		Animal::operator=(assign); //copies animal part
		if (this->catBrain)
			delete (this->catBrain);
		this->catBrain = new Brain(*assign.catBrain); // deep copies new brain
	}
	return (*this);
}

Cat::~Cat()
{
	if (this->catBrain)
		delete this->catBrain;
	std::cout << BOLD_GREEN << "Cat Destructor called" << RESET << std::endl;
}

void Cat::makeSound() const
{
	std::cout << BOLD_WHITE << "Cat: 🐱 Meow! Meow!" << RESET << std::endl;
}

std::string Cat::getIdea(int i) const
{
	if (i >= 0 && i < 100 && this->catBrain)
		return (this->catBrain->getIdea(i));
	return("Error: Invalid index in getIdea(). Valid range is 0 to 99.");
}

void Cat::setIdea(int i, const std::string& idea)
{
	if (i >= 0 && i < 100)
		this->catBrain->setIdea(i, idea);
	else
		std::cout << "Error: invalid index in setIdea(). Valid range is 0 to 99." << std::endl;
}

const Brain* Cat::getBrainPtr(void) const
{
	return (this->catBrain);
}