#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

#define RESET        "\033[0m"
#define BOLD_BLACK   "\033[1;30m"
#define BOLD_RED     "\033[1;31m"
#define BOLD_GREEN   "\033[1;32m"
#define BOLD_YELLOW  "\033[1;33m"
#define BOLD_BLUE    "\033[1;34m"
#define BOLD_MAGENTA "\033[1;35m"
#define BOLD_CYAN    "\033[1;36m"
#define BOLD_WHITE   "\033[1;37m"

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &copy);
		virtual ~Animal();
		Animal& operator=(const Animal &assign);

		std::string getType(void) const;
		virtual void makeSound() const;

		virtual std::string getIdea(int i) const; //overridde 
		virtual void setIdea(int i, const std::string& idea); //overridde 
		virtual const Brain* getBrainPtr(void) const; //override
};

#endif