#include "header.hpp"


void	print_header(void)
{
	std::cout << "*********************************************" << std::endl;
	std::cout << "*          Welcome back to the 80s          *" << std::endl;
	std::cout << "*********************************************" << std::endl << std::endl;
	std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
}

int	main(void)
{
	PhoneBook phonebook;
	std:: string command;

	print_header();
	while (std::getline(std::cin, command))
	{
		if (std::cin.eof())
			return (0);
		if (command == "EXIT" || command == "exit")
			break ;
		else if (command == "ADD" || command == "add")
			phonebook.addContact();
		else if (command == "SEARCH" || command == "search")
			phonebook.search();
		else
			std::cout << "Invalid command. Try ADD, SEARCH, or EXIT: ";
		std::cin.clear();
	}
	return (0);
}