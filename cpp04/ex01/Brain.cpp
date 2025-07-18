#include "Brain.hpp"
#include "Animal.hpp"

Brain::Brain()
{
	std::cout << BOLD_CYAN << "Brain default Constructor called" << RESET << std::endl;
}
Brain::Brain(const Brain& cpy)
{
	std::cout << BOLD_CYAN << "Brain Copy Constructor called" << RESET << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = cpy.ideas[i];
}

Brain::~Brain()
{
	std::cout << BOLD_CYAN << "Brain Destructor called" << RESET << std::endl;
}

Brain& Brain::operator=(const Brain& assign)
{
	if (this != &assign)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = assign.ideas[i];
	return (*this);
}

std::string Brain::getIdea(int i) const
{
	if (i >= 0 && i < 100)
		return (this->ideas[i]);
	return("Error: Invalid index in getIdea(). Valid range is 0 to 99.");
}

void Brain::setIdea(int i, const std::string& idea)
{
	if (i >= 0 && i < 100)
		this->ideas[i] = idea;
	else
		std::cout << "Error: invalid index in setIdea(). Valid range is 0 to 99." << std::endl;
}
