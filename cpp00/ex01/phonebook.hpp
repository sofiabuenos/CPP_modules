#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <array>
# include <iomanip>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		Contact();
		~Contact();
		void setInfo(const std::string& firstName, const std::string& lastName, const std::string& nickname,
			const std::string& phoneNumber, const std::string& darkestSecret);
		void printInfo();
		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		std::string getPhoneNumber();
		std::string getDarkestSecret();
};

class PhoneBook
{
	private:
		std::array<Contact, 8> contacts;
		int contactCount;
	public:
		PhoneBook();
		~PhoneBook();
		void printContacts();
		int getSize();
		void getInfo(int index);
		//void showList();
		//void searchContact();
		void addNewContact(const std::string& firstName, const std::string& lastName, const std::string& nickname, const std::string& phoneNumber, const std::string& darkestSecret);
};

#endif
