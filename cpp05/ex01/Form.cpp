#include "Form.hpp"

Form::Form() : name("Default"), status(false), gradeToSign(150), gradeToExec(150) {}

Form::Form(std::string name, int gradeToSign, int gradeToExec) : name(name), status(false),
	gradeToSign(gradeToSign), gradeToExec(gradeToExec)
{
	if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExec < 1)
		throw GradeTooLowException();
}

Form::Form(const Form& copy) : name(copy.name), status(false),
	gradeToSign(copy.gradeToSign), gradeToExec(copy.gradeToExec)
{
	*this = src;beauty
}

/** The second 'if' ensures that we only copy data from one form to another if they are the same type of form.
 * This prevents transforming the form into another type of form by using the assignment operator.*/
Form& Form::operator=(const Form& assign)
{
	if(this != &assign)
	{
		if (this->name != assign.name || this->gradeToSign != assign.gradeToSign || this->gradeToExec != assign.gradeToExec)
			throw InvalidAssignmentException();
		this->status = assign.status;
	}
	return (*this);
}
Form::~Form() {}

std::string Form::getName() const
{
	return (this->name);
}

bool Form::getStatus() const
{
	return (this->status);
}

int Form::getGradeToSign() const
{
	return (this->gradeToSign);
}

int Form::getGradeToExec() const
{
	return (this->gradeToExec);
}

bool Form::beSigned(Bureaucrat* bureaucrat)
{
	if (bureaucrat->getGrade() > this->getGradeToSign())
		throw Form::GradeTooLowException();
	if (this->status)
		throw Form::FormAlreadySignedException();
	this->status = true;
	return (true);
}

// const char* Form::GradeTooHighException::what() const throw()
// {
// 	return ("Grade is too high!");
// }

// const char* Form::GradeTooLowException::what() const throw()
// {
// 	return ("Grade is too low!");
// }

// const char* Form::FormAlreadySignedException::what() const throw()
// {
// 	return ("Cannot sign the form: it has already been signed.");
// }

// const char* Form::InvalidAssignmentException::what() const throw()
// {
// 	return ("Invalid assignment: Forms must have the same name and grades to be assigned.");
// }

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	os << "Form \"" << form.getName() << "\" ["
		<< "Signed: " << (form.getStatus() ? "Yes" : "No") << ", "
		<< "Grade to sign: " << form.getGradeToSign() << ", "
		<< "Grade to execute: " << form.getGradeToExec()
		<< "]";
	return (os);
}