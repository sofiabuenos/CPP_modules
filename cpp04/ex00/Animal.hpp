#ifndef ANIMAL_HPP
# define ANIMAL_HPP

32m"
# define BOLD_YELLOW  "\033[1;33m"
# define BOLD_BLUE    "\033[1;34m"# include <iostream>
# include <string>

# define RESET   "\033[0m"
# define BLACK   "\033[30m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define WHITE   "\033[37m"
# define RESET        "\033[0m"
# define BOLD_BLACK   "\033[1;30m"
# define BOLD_RED     "\033[1;31m"
# define BOLD_GREEN   "\033[1;
# define BOLD_MAGENTA "\033[1;35m"
# define BOLD_CYAN    "\033[1;36m"
# define BOLD_WHITE   "\033[1;37m"

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
		virtual void makeSound() const; //overridde 
};

#endif