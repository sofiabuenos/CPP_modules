#include "header.hpp"

// void check(const std::string& firstName, const std::string& lastName, const std::string& nickname, const std::string& phoneNumber, const std::string& darkestSecret)
// {
//     std::cout << "First Name: " << firstName << std::endl;
//     std::cout << "Last Name: " << lastName << std::endl;
//     std::cout << "Nickname: " << nickname << std::endl;
//     std::cout << "Phone Number: " << phoneNumber << std::endl;
//     std::cout << "Darkest Secret: " << darkestSecret << std::endl;
// }


// void	search(PhoneBook& phonebook)
// { 
// 	std::cout << std::endl;
// 	std::cout << "------------------------------------------------" << std::endl;
// 	std::cout << std::setw(10) << std::right << "INDEX" << " | "
// 	<< std::setw(10) << std::right << "FIRST NAME" << " | "
// 	<< std::setw(10) << std::right << "LAST NAME" << " | "
// 	<< std::setw(10) << std::right << "NICKNAME" << std::endl;
// 	for (int i = 0; i < phonebook.getSize(); i++)
// 	{
// 		std::cout << std::setw(10) << std::right << i << " | ";
// 		std::cout << std::setw(10) << std::right << phonebook
// 	}
// 	std::cout << "------------------------------------------------" << std::endl;

// }

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
			exit(0);
		if (command == "EXIT")
			break ;
		else if (command == "ADD" || command == "add")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.search();
		else
			std::cout << "Invalid command. Try ADD, SEARCH, or EXIT: ";
		std::cin.clear();
	}
	return (0);
}