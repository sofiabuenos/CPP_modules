#include "Form.hpp"

int main (void)
{
	std::cout << BOLD_YELLOW << "\n<<<< BASIC TEST >>>>\n" << RESET << std::endl;

	Bureaucrat bureaucrat("Alice", 42);
	std::cout << "Introducing you to " << bureaucrat;
	Form a("FormA", 42, 100);
	std::cout << a << std::endl;
	bureaucrat.signForm(a);
	std::cout << a << std::endl;

	std::cout << BOLD_YELLOW << "\n<<<< GRADE TOO LOW TEST >>>>\n" << RESET << std::endl;
	Form b("FormB", 40, 100);
	std::cout << b << std::endl;
	bureaucrat.signForm(b);
	std::cout << b << std::endl;

	std::cout << BOLD_YELLOW << "\n<<<< FORM GRADES OUT OD BOUNDS TEST >>>>\n" << RESET << std::endl;
	Form c("FormC", 151, 100);
}

