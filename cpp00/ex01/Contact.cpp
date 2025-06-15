#include "header.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::printInfo(void)
{
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::setw(10) << BOLD_CYAN << "FIRST NAME: " << RESET << truncate(getFirstName()) << std::endl;
	std::cout << std::setw(10) << BOLD_CYAN << "LAST NAME: " << RESET << truncate(getLastName()) << std::endl;
	std::cout << std::setw(10) << BOLD_CYAN << "NICKNAME: " << RESET << truncate(getNickname()) << std::endl;
	std::cout << std::setw(10) << BOLD_CYAN << "PHONE NUM: " << RESET << truncate(getPhoneNumber()) << std::endl;
	std::cout << std::setw(10) << BOLD_CYAN << "DARKEST SECRET: " << RESET << getDarkestSecret() << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
}

void Contact::setInfo(const std::string firstName, const std::string lastName, const std::string nickname,
	const std::string phoneNumber, const std::string darkestSecret)
{
	cFirstName = firstName;
	cLastName = lastName;
	cNickname = nickname;
	cPhoneNumber = phoneNumber;
	cDarkestSecret = darkestSecret;

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