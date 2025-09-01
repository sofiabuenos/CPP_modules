#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{
	std::cout << BOLD_GREEN << "Bureaucrat default constructor called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	std::cout << BOLD_GREEN << "Bureaucrat constructor called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	std::cout << BOLD_GREEN << "Bureaucrat copy constructor called" << RESET << std::endl;
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& assign)
{
	if (this != &assign)
	{
		if (this->name != assign.name)
			std::cout << "cant assign cuz its const";
		this->grade = assign.grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << BOLD_GREEN << "Bureaucrat destructor called" << RESET << std::endl;
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::increment()
{
	if (this->grade -1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade -= 1;
}
void Bureaucrat::decrement()
{
	if (this->grade +1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade += 1;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "\n";
	return (os);
}