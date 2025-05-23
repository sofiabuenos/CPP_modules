#include "phonebook.hpp"

// void check(const std::string& firstName, const std::string& lastName, const std::string& nickname, const std::string& phoneNumber, const std::string& darkestSecret)
// {
//     std::cout << "First Name: " << firstName << std::endl;
//     std::cout << "Last Name: " << lastName << std::endl;
//     std::cout << "Nickname: " << nickname << std::endl;
//     std::cout << "Phone Number: " << phoneNumber << std::endl;
//     std::cout << "Darkest Secret: " << darkestSecret << std::endl;
// }

void	get_info(std::string& firstName, std::string& lastName, std::string& nickname, std::string& phoneNumber, std::string& darkestSecret)
{
	std::cout << "Enter the contact's first name: " << std::endl;
	std::cin >> firstName;
	std::cout << "Enter the contact's last name: " << std::endl;
	std::cin >> lastName;
	std::cout << "Enter a nickname for the contact: " << std::endl;
	std::cin >> nickname;
	std::cout << "Enter the contact's phone number: " << std::endl;
	std::cin >> phoneNumber;
	std::cout << "Enter the contact's darkest secret" << std::endl;
	std::cin >> darkestSecret;
}

void	add(PhoneBook& phonebook)
{
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	std::cout << std::endl << "Let's add a new contact." << std::endl << std::endl;
	get_info(firstName, lastName, nickname, phoneNumber, darkestSecret);
	phonebook.addNewContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
	//check(firstName, lastName, nickname, phoneNumber, darkestSecret);
}
void	search(PhoneBook& phonebook)
{ 
	std::cout << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << std::setw(10) << std::right << "INDEX" << " | "
	<< std::setw(10) << std::right << "FIRST NAME" << " | "
	<< std::setw(10) << std::right << "LAST NAME" << " | "
	<< std::setw(10) << std::right << "NICKNAME" << std::endl;
	for (int i = 0; i < phonebook.getSize(); i++)
	{
		std::cout << std::setw(10) << std::right << i << " | ";
		std::cout << std::setw(10) << std::right << phonebook.
	}
	std::cout << "------------------------------------------------" << std::endl;

}

int	main(void)
{
	PhoneBook phonebook;
	std:: string command;

	std::cout << "*********************************************" << std::endl;
	std::cout << "*          Welcome back to the 80s          *" << std::endl;
	std::cout << "*********************************************" << std::endl << std::endl;
	std::cout << "Enter a command (ADD, SEARCH, EXIT): ";

	while (std::cin >> command)
	{
		if (command == "ADD" || command == "add")
			add(phonebook);
		else if (command == "SEARCH")
			search(phonebook);
		// else if (command == "EXIT")
		// 	// FINISH PROGRAM
		else
			std::cout << "Invalid command. Try ADD, SEARCH, or EXIT." << std::endl;
	}
	std::cout << "What now, amigo? Enter next command:" << std::endl;
	return (0);
}