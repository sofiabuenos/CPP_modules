#include <iostream>
#include <fstream>

int	checks(int ac, char** av)
{
	if (ac != 4)
	{
		std::cerr << "Error: Invalid number of arguments." << std::endl;
		std::cerr << "Usage: ./notlosers <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	return (0);
}

int	main(int ac, char** av)
{
	std::string line;

	if (checks)
		return (1);
	std::ifstream file(av[1]);
	if(!file.is_open())

}