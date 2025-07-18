#ifndef AAANIMAL_HPP
# define AAANIMAL_HPP

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

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(const AAnimal &copy);
		virtual ~AAnimal();
		AAnimal& operator=(const AAnimal &assign);

		std::string getType(void) const;
		virtual void makeSound() const = 0;

		virtual std::string getIdea(int i) const; //overridde 
		virtual void setIdea(int i, const std::string& idea); //overridde 
		virtual const Brain* getBrainPtr(void) const; //override
};

#endif