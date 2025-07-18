
#include "Dog.hpp"

Dog::Dog() : AAnimal(), dogBrain(new Brain())
{
	this->type = "Dog";
	std::cout << BOLD_GREEN << "Dog Default Constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog& cpy) : AAnimal(cpy), dogBrain(new Brain(*cpy.dogBrain))
{
	std::cout << BOLD_GREEN << "Dog Copy Constructor called" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& assign)
{
	if (this != &assign)
	{
		AAnimal::operator=(assign); //copies Aanimal part
		if (this->dogBrain)
			delete (this->dogBrain);
		this->dogBrain = new Brain(*assign.dogBrain); //deep copy new brain
	}
	return (*this);
}

Dog::~Dog()
{
	if (this->dogBrain)
		delete this->dogBrain;
	std::cout << BOLD_GREEN << "Dog Destructor called" << RESET << std::endl;
}
/*✨ dynamic Polimorphism! ✨ since this is a virtual method - compilation time */
void Dog::makeSound() const
{
	std::cout << BOLD_WHITE << "Dog: 🐶 Woof! Woof! " << RESET << std::endl;
}

std::string Dog::getIdea(int i) const
{
	if (i >= 0 && i < 100 && this->dogBrain)
		return (this->dogBrain->getIdea(i));
	return("Error: Invalid index in getIdea(). Valid range is 0 to 99.");
}

void Dog::setIdea(int i, const std::string& idea)
{
	if (i >= 0 && i < 100)
		this->dogBrain->setIdea(i, idea);
	else
		std::cout << "Error: invalid index in setIdea(). Valid range is 0 to 99." << std::endl;
}

const Brain* Dog::getBrainPtr(void) const
{
	return(this->dogBrain);
}