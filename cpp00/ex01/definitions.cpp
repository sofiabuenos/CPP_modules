#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor" << std::endl;
}
PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor" << std::endl;
}

void PhoneBook::printContacts()
{
	for (size_t i = 0; i < contacts.size(); i++) {
		std::cout << "Contact " << i + 1 << ":" << std::endl;
		contacts[i].printInfo();
	}
}

int	PhoneBook::getSize(void)
{
	return contactCount;
}

// void PhoneBook::getInfo(int index)
// {
// 	for (int i = 0; i <= index; i++)
// 	{
// 		if (i < index)
// 			i++;
// 		else
// 			contacts[i].
// 	}
// }

void PhoneBook::addNewContact(const std::string& firstName, const std::string& lastName, const std::string& nickname, const std::string& phoneNumber, const std::string& darkestSecret)
{
	static int index = 0;
	contacts[index].setInfo(firstName, lastName, nickname, phoneNumber, darkestSecret);
	index = (index + 1) % 8;
	if (contactCount < 8)
		contactCount++;
}

Contact::Contact(void)
{
	std::cout << "Constructor - contact" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Destructor - contact" << std::endl;
}

void Contact::printInfo(void)
{
	std::cout << "First Name: " << first_name << std::endl;
	std::cout << "Last Name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone Number: " << phone_number << std::endl;
	std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}

void Contact::setInfo(const std::string& firstName, const std::string& lastName, const std::string& nickname, const std::string& phoneNumber, const std::string& darkestSecret)
{
	this->first_name = firstName;
	this->last_name = lastName;
	this->nickname = nickname;
	this->phone_number = phoneNumber;
	this->darkest_secret = darkestSecret;

	std::cout << std::endl << "Your contact has been successfully added!" << std::endl;
	std::cout << std::endl;
	Contact::printInfo();
}

std::string Contact::getFirstName(void)
{
	return this->first_name;
}

std::string Contact::getLastName(void)
{
	return this->last_name;
}

std::string Contact::getNickname(void)
{
	return this->nickname;
}

std::string Contact::getPhoneNumber(void)
{
	return this->phone_number;
}

std::string Contact::getDarkestSecret(void)
{
	return this->darkest_secret;
}
