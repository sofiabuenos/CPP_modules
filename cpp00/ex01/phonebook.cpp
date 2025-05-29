#include "header.hpp"

PhoneBook::PhoneBook(): contactCount(0) {}

PhoneBook::~PhoneBook() {}

int	PhoneBook::getSize(void)
{
	return contactCount;
}

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
	std::cout << "Enter the contact's darkest secret: " << std::endl;
	std::cin >> darkestSecret;
}

void	PhoneBook::addContact()
{
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
	static int index = 0;

	std::cout << std::endl << "Let's add a new contact." << std::endl << std::endl;
	get_info(firstName, lastName, nickname, phoneNumber, darkestSecret);

	contacts[index].setInfo(firstName, lastName, nickname, phoneNumber, darkestSecret);
	// std::cout << "Contact added at index " << index << ":" << std::endl;
    // std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
    // std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
    // std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
    // std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
    // std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
	index = (index + 1) % 8;
	if (contactCount < 8)
		contactCount++;
}

std::string truncate(const std::string& str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void	PhoneBook::search()
{
	//std::string print;
	if (contactCount == 0)
	{
		std::cout << "No contacts available." << std::endl;
		return;
	}
	std::cout << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << std::setw(10) << std::right << "INDEX" << " | "
	<< std::setw(10) << std::right << "FIRST NAME" << " | "
	<< std::setw(10) << std::right << "LAST NAME" << " | "
	<< std::setw(10) << std::right << "NICKNAME" << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	for (int i = 0; i < getSize(); i++)
	{
		std::cout << std::setw(10) << std::right << i + 1 << " | "
			<< std::setw(10) << std::right << truncate(contacts[i].getFirstName()) << " | "
			<< std::setw(10) << std::right << truncate(contacts[i].getLastName()) << " | "
			<< std::setw(10) << std::right << truncate(contacts[i].getNickname()) << std::endl;
	}
}



