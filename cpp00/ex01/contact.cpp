#include "header.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::printInfo(void)
{
	std::cout << std::endl;
	std::cout << "--------------------------------------------------------------------" << std::endl;
	std::cout << std::setw(10) << std::right << "FIRST NAME" << " | "
	<< std::setw(10) << std::right << "LAST NAME" << " | "
	<< std::setw(10) << std::right << "NICKNAME" << " | "
	<< std::setw(10) << std::right << "PHONE NUM" << " | "
	<< std::setw(10) << std::right << "DARKEST SECRET" << std::endl;
	std::cout << "--------------------------------------------------------------------" << std::endl;

	std::cout << std::setw(10) << std::right << truncate(getFirstName()) << " | "
	<< std::setw(10) << std::right << truncate(getLastName()) << " | "
	<< std::setw(10) << std::right << truncate(getNickname()) << " | "
	<< std::setw(10) << std::right << truncate(getPhoneNumber()) << " | "
	<< std::setw(10) << std::right << truncate(getDarkestSecret()) << " | " << std::endl;
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