#include <iostream>
#include <string>

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