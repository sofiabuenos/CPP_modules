#include <iostream>
#include "SedAlt.hpp"
#include <fstream>

/* Exercise goal:
 * Learn file management
*/

int	main(int ac, char** av)
{
	SedAlt SedAlt;
	if (ac != 4)
	{
		std::cerr << "Error: Invalid number of arguments." << std::endl;
		std::cerr << "Usage: ./ex04 <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	if (!SedAlt.openInFile(av[1]))
		return (1);
	if (!SedAlt.openOutFile(av[1]))
		return (1);
	SedAlt.replace(av);
	return (0);
}