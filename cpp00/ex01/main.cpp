#include "header.hpp"


void	print_header(void)
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "██████╗  ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗  ██╗" << std::endl;
	std::cout << "██╔══██╗ ██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝" << std::endl;
	std::cout << "██████╔╝ ███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝ " << std::endl;
	std::cout << "██╔═══╝  ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██ ██║   ██║██║   ██║██╔═██╗ " << std::endl;
	std::cout << "██║      ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗" << std::endl;
	std::cout << "╚═╝      ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝" << std::endl;
	std::cout << std::endl;
	std::cout << "                            p h o n e b o o k                              " << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Your contacts will be securely stored while the program is running.\n";
	std::cout << "Ready to go! Please enter a command: ADD, SEARCH, or EXIT: ";

}


int	main(void)
{
	PhoneBook phonebook;
	std:: string command;

	print_header();
	while (1)
	{
		if (!std::getline(std::cin, command))
		{
			if (std::cin.eof())
				break ;
		}
		if (command == "EXIT" || command == "exit")
			return (0);
		else if (command == "ADD" || command == "add")
			phonebook.addContact();
		else if (command == "SEARCH" || command == "search")
			phonebook.search();
		else
		{
			std::cout << BOLD_RED << "Invalid command" << RESET << std::endl;
			std::cout << "Try ADD, SEARCH, or EXIT:";
		}
		std::cin.clear();
	}
	return (0);
}