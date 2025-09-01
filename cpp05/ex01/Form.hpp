#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

# define RESET   "\033[0m"
# define BLACK   "\033[30m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define WHITE   "\033[37m"
# define RESET        "\033[0m"
# define BOLD_BLACK   "\033[1;30m"
# define BOLD_RED     "\033[1;31m"
# define BOLD_GREEN   "\033[1;32m"
# define BOLD_YELLOW  "\033[1;33m"
# define BOLD_BLUE    "\033[1;34m"
# define BOLD_MAGENTA "\033[1;35m"
# define BOLD_CYAN    "\033[1;36m"
# define BOLD_WHITE   "\033[1;37m"

class Bureaucrat;

class Form
{
	private:
		std::string const	name;
		bool				status;
		int const			gradeToSign;
		int const			gradeToExec;
	public:
		Form();
		Form(std::string name, int gradeToSign, int gradeToExec);
		Form(const Form& copy);
		Form& operator=(const Form& assign);
		~Form();
		std::string getName() const;
		bool getStatus() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
		bool beSigned(Bureaucrat* bureaucrat);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("Grade is too high!");
				}; //override
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw(){
					return ("Grade is too low!");
				} //override
		};
		class FormAlreadySignedException : public std::exception
		{
			public:
				virtual const char* what() const throw(){
					return ("Cannot sign the form: it has already been signed.");
				} //override
		};
		class InvalidAssignmentException : public std::exception
		{
			public:
				virtual const char* what() const throw(){
					return ("Invalid assignment: Forms must have the same name and grades to be assigned.");
				} //override 
		};

};

std::ostream& operator<<(std::ostream& os, const Form& form);




#endif //FORM_HPP