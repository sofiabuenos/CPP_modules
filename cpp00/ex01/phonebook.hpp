#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp" 

class PhoneBook
{
	private:
		std::array<Contact, 8> contacts;
		int contactCount;
	public:
		PhoneBook();
		~PhoneBook();
		//void printContacts();
		int getSize();
		//void showList();
		void search();
		void addContact();
};

#endif
