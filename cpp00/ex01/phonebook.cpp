#include "header.hpp"

PhoneBook::PhoneBook(): contactCount(0)
{
	std::cout << std::endl;
	std::cout << BOLD_WHITE << "✨ Welcome to your Phonebook ✨" << RESET << std::endl;
	std::cout << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << std::endl;
	std::cout << BOLD_WHITE << "Closing your Phonbook..." << RESET << std::endl;
	std::cout << BOLD_WHITE << "Your contacts will be gone forever!" << RESET << std::endl;
	std::cout << BOLD_WHITE << "Goodbye 👋🏻" << RESET << std::endl;
	std::cout << std::endl;
}

int	PhoneBook::getSize(void)
{
	return contactCount;
}



bool	validInput(std::string &info, int isNum)
{
	trim(info);
	if (info.empty())
	{
		std::cout << "Input cannot be empty." << std::endl;
		return false;
	}
	if (isNum == 1 && !isNumber(info))
	{
		std::cout << "Phone Number must contain 9 digits." << std::endl;
		return false;
	}
	return true;
}

int	get_info(std::string &firstName, std::string &lastName, std::string &nickname, std::string &phoneNumber, std::string &darkestSecret)
{
	std::cout << "Enter the contact's first name: ";
	if (!std::getline(std::cin, firstName))
		return -1;
	if (!validInput(firstName, 0))
		return 1;

	std::cout << "Enter the contact's last name: ";
	if (!std::getline(std::cin, lastName))
		return -1;
	if (!validInput(lastName, 0))
		return 1;

	std::cout << "Enter a nickname for the contact: ";
	if (!std::getline(std::cin, nickname))
		return -1;
	if (!validInput(nickname, 0))
		return 1;

	std::cout << "Enter the contact's phone number: ";
	if (!std::getline(std::cin, phoneNumber))
		return -1;
	if (!validInput(phoneNumber, 1))
		return 1;

	std::cout << "Enter the contact's darkest secret: ";
	if (!std::getline(std::cin, darkestSecret))
		return -1;
	if (!validInput(darkestSecret, 0))
		return 1;

	return 0;
}

void PhoneBook::addContact()
{
	std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
	static int index = 0;
	int ret;

	std::cout << std::endl << CYAN <<  "Let's add a new contact to your phonebook..." << RESET << std::endl;
	std::cout << std::endl;
	ret = get_info(firstName, lastName, nickname, phoneNumber, darkestSecret);
	if (ret == 1)
	{
		std::cout << "Invalid input detected. Please re-enter the command ADD to try again: ";
		return;
	}
	else if (ret == -1)
	{
		std::cout << std::endl;
		exit (0);
	}
	contacts[index].setInfo(firstName, lastName, nickname, phoneNumber, darkestSecret);
	index = (index + 1) % 8;
	if (contactCount < 8)
		contactCount++;
	std::cout << std::endl << CYAN << "Your contact has been successfully added 🎉" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << "Enter a new command: ";
}


bool PhoneBook::showContact()
{
	int	index;
	std::string input;
	std::cout << std::endl << "Would you like to view details of a specific contact?\nEnter the contact's index or type NO to return to the main menu: ";
	std::getline(std::cin, input);
	trim(input);
	if (input == "NO" || input == "no")
	{
		std::cout << std::endl << "Enter a new command. Try ADD, SEARCH, or EXIT: ";
		return false;
	}
	if (input.length() > 1 || !isdigit(input[0]) || atoi(input) < 1 || atoi(input) > 8)
	{
		std::cout << BOLD_RED << "OOPS! Invalid index. Enter SEARCH to try again: " << RESET;
		return false;
	}
	index = atoi(input) - 1;
	if (index >= contactCount)
	{
		std::cout << std::endl << "No contact found at index" << input << "." << " Enter another command or SEARCH to try again: ";
		return false;
	}
	this->contacts[index].printInfo();
	return true;
}

void	PhoneBook::search()
{
	if (contactCount == 0)
	{
		std::cout << std::endl << "No contacts available yet. Enter ADD to add your first contact: ";
		return;
	}
	std::cout << std::endl << CYAN << "Listing all your contacts..." << RESET << std::endl;
	std::cout << "-------------------------------------------------------------" << std::endl;
	std::cout << std::setw(10) << std::right << "INDEX" << " | "
	<< std::setw(10) << std::right << "FIRST NAME" << " | "
	<< std::setw(10) << std::right << "LAST NAME" << " | "
	<< std::setw(10) << std::right << "NICKNAME" << std::endl;
	std::cout << "-------------------------------------------------------------" << std::endl;
	for (int i = 0; i < getSize(); i++)
	{
		std::cout << std::setw(10) << std::right << i + 1 << " | "
			<< std::setw(10) << std::right << truncate(contacts[i].getFirstName()) << " | "
			<< std::setw(10) << std::right << truncate(contacts[i].getLastName()) << " | "
			<< std::setw(10) << std::right << truncate(contacts[i].getNickname()) << std::endl;
	}
	if (!showContact())
		return ;
	std::cout << std::endl << "Enter a new command: ";
}



