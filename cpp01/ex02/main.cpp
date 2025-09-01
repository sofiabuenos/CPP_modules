#include <iostream>
#include <string>

/*
 * Exercise goal:
 * Learn the key differences between references and pointers in c++
*/


int	main(void)
{
	std::string greeting = "HI THIS IS BRAIN";

	std::string* strPTR = &greeting;
	std::string& strREF = greeting;

	std::cout << "\033[1;37m" << "Memory address of greeting - STRING VARIABLE: " << "\033[0m";
	std::cout << &greeting << std::endl;
	std::cout << "\033[1;37m" << "Memory address of STRING POINTER: " << "\033[0m";
	std::cout << &strPTR << std::endl;
	std::cout << "\033[1;37m" << "Memory addressheld by STRING REFRERENCE: " << "\033[0m";
	std::cout << &strREF << std::endl;

	std::cout << "\033[1;37m" << "\nValue of the string variable: " << "\033[0m";
	std::cout << greeting << std::endl;
	std::cout << "\033[1;37m" << "Value pointed to by strPTR: " << "\033[0m";
	std::cout << *strPTR << std::endl;
	std::cout << "\033[1;37m" << "Value pointed to by strREF: " << "\033[0m";
	std::cout << strREF << std::endl;
	return (0);
}