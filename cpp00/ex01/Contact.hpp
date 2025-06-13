#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "PhoneBook.hpp"
# include "header.hpp"


class Contact
{
	private:
		std::string cFirstName;
		std::string cLastName;
		std::string cNickname;
		std::string cPhoneNumber;
		std::string cDarkestSecret;
	public:
		Contact();
		~Contact();
		void printInfo();
		void setInfo(const std::string firstName, const std::string lastName, const std::string nickname,
			const std::string phoneNumber, const std::string darkestSecret);
		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		std::string getPhoneNumber();
		std::string getDarkestSecret();
};


#endif