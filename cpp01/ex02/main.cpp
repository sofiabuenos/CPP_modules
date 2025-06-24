#include <iostream>
#include <string>

/*
 * In C++, both references and pointers are used to refer to other variables, but they have key differences:
 *
 * - A pointer is a variable that holds the memory address of another variable. 
 *   Pointers can be reassigned to point to different variables and can be null
 *   Example: std::string* ptr = &greeting;
 *
 * - A reference is an alias for another variable - they share the same memory address.
 *   Once initialized, a reference cannot be changed to refer to another variable and cannot be null.
 *   Example: std::string& ref = greeting;
 */


int	main(void)
{
	std::string greeting = "HI THIS IS BRAIN";

	std::string* ptr = &greeting;
	std::string &ref = greeting;

	std::cout << &greeting << std::endl; //Memory address of greeting - STRING VARIABLE
	std::cout << &ptr << std::endl; //outputs the memory address of STRING POINTER
	std::cout << &ref << std::endl; // Memory address held by STRING REFRERENCE

	std::cout << greeting << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;

}