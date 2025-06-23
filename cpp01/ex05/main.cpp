#include "Harl.hpp"

bool check(char **av, std::string &level)
{
	level = av[1];
	if (level.empty())
	{
		std::cout << "haha -- very funny, you almost tricked me on this one." << std::endl
				  << "Please use the available levels next time: DEBUG, INFO, WARNING or ERROR" << std::endl;
		return (false);
	}
	if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
	{
		std::cout << "level: " << level << " unavailable (thank god)" << std::endl
				  << "Please try  DEBUG, INFO, WARNING or ERROR" << std::endl;
		return (false);
	}
	return (true);
}

int main (int ac, char **av)
{
	Harl Karen;
	std::string level;

	if (ac == 2)
	{
		if (check(av, level) == false)
			return (1);
		Karen.complain(level);
	}
	else
	{
		std::cout << BOLD_RED << "Error: Invalid arguments." << RESET << std::endl;
		std::cout << "Usage: ./Harl <level>\nAvailable levels: DEBUG, INFO, WARNING, ERROR" << std::endl;
	}
	return (0);
}