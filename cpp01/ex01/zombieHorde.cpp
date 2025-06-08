#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N < 1)
		std::cout << "Horde must contain at least 1 Zombie" << std::endl;
	Zombie *horde = new Zombie[N];
	if (!horde)
	{
		std::cout << "Memory allocation issue" << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
	{
		horde[i] = new Zombie(name);
	}
}