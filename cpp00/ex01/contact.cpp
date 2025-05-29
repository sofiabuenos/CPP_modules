#include "header.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::printInfo(void)
{
	std::cout << "First Name: " << cFirstName << std::endl;
	std::cout << "Last Name: " << cLastName << std::endl;
	std::cout << "Nickname: " << cNickname << std::endl;
	std::cout << "Phone Number: " << cPhoneNumber << std::endl;
	std::cout << "Darkest Secret: " << cDarkestSecret << std::endl;
}

void Contact::setInfo(const std::string firstName, const std::string lastName, const std::string nickname,
	const std::string phoneNumber, const std::string darkestSecret)
{
	cFirstName = firstName;
	cLastName = lastName;
	cNickname = nickname;
	cPhoneNumber = phoneNumber;
	cDarkestSecret = darkestSecret;

	std::cout << std::endl << "Your contact has been successfully added!" << std::endl;
	std::cout << std::endl;
	Contact::printInfo();
}


std::string Contact::getFirstName(void)
{
	return cFirstName;
}

std::string Contact::getLastName(void)
{
	return cLastName;
}

std::string Contact::getNickname(void)
{
	return cNickname;
}

std::string Contact::getPhoneNumber(void)
{
	return cPhoneNumber;
}

std::string Contact::getDarkestSecret(void)
{
	return cDarkestSecret;
}