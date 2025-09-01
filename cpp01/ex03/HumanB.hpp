#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

# define RESET   "\033[0m"
# define BOLD_BLACK   "\033[1;30m"
# define BOLD_RED     "\033[1;31m"
# define BOLD_GREEN   "\033[1;32m"
# define BOLD_YELLOW  "\033[1;33m"
# define BOLD_BLUE    "\033[1;34m"
# define BOLD_MAGENTA "\033[1;35m"
# define BOLD_CYAN    "\033[1;36m"
# define BOLD_WHITE   "\033[1;37m"

class HumanB
{
	private:
		Weapon* weapon;
		std::string name;
	public:
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon& Weapon);
		void attack();
};

#endif