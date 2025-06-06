#include "header.hpp"

PhoneBook::PhoneBook(): contactCount(0) {}

PhoneBook::~PhoneBook() {}

int	PhoneBook::getSize(void)
{
	return contactCount;
}

bool isNumber(const std::string &phoneNumber)
{
	if (phoneNumber.length() != 9)
		return false;
	for (size_t i = 0; i < phoneNumber.length(); i++)
	{
		if (!std::isdigit(phoneNumber[i]))
			return false;
	}
	return true;
}

bool	validInput(std::string &info, int isNum)
{
	info.erase(std::remove(info.begin(), info.end(), '\n'), info.end());
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
	std::getline(std::cin,firstName);
	if (!validInput(firstName, 0))
		return (1);
	std::cout << "Enter the contact's last name: ";
	std::getline(std::cin,lastName);
	if (!validInput(lastName, 0))
		return (1);
	std::cout << "Enter a nickname for the contact: ";
	std::getline(std::cin,nickname);
	if (!validInput(nickname, 0))
		return (1);
	std::cout << "Enter the contact's phone number: ";
	std::getline(std::cin,phoneNumber);
	if (!validInput(phoneNumber, 1))
		return (1);
	std::cout << "Enter the contact's darkest secret: ";
	std::getline(std::cin,darkestSecret);
	if (!validInput(darkestSecret, 0))
		return (1);
	return (0);
}

void	PhoneBook::addContact()
{
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
	static int index = 0;

	std::cout << std::endl << "Let's a new contact to your phonebook..." << std::endl << std::endl;
	if (get_info(firstName, lastName, nickname, phoneNumber, darkestSecret))
	{
		std::cout << "Invalid input detected. Please re-enter the command ADD to try again: ";
		return;
	}
	contacts[index].setInfo(firstName, lastName, nickname, phoneNumber, darkestSecret);
	index = (index + 1) % 8;
	if (contactCount < 8)
		contactCount++;
	std::cout << std::endl << "Enter new command: ";
}

std::string truncate(const std::string& str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

bool PhoneBook::showContact()
{
	int	index;
	std::string input;
	std::cout << std::endl << "Would you like to view details of a specific contact? Enter the contact's index or type NO to return to the main menu: ";
	std::getline(std::cin, input);
	input.erase(std::remove(input.begin(), input.end(), '\n'), input.end());
	if (input == "NO")
	{
		std::cout << "Enter a new command. Try ADD, SEARCH, or EXIT: ";
		return false;
	}
	if (input.length() > 1 || !isdigit(input[0]) || std::stoi(input) < 1 || std::stoi(input) > 8)
	{
		std::cout << "Invalid index. Enter SEARCH to try again: " ;
		return false;
	}
	index = std::stoi(input) - 1;
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
	std::cout << std::endl;
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



