#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp" 

class PhoneBook
{
	private:
		Contact contacts[8];
		int contactCount;
	public:
		PhoneBook();
		~PhoneBook();
		int getSize();
		bool showContact();
		void search();
		void addContact();
};

#endif
