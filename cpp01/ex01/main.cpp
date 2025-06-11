#include "Zombie.hpp"

int	main(void)
{
	int hordeSize = 5;
	Zombie* horde = zombieHorde(hordeSize, "Rotter");
	for (int i = 0; i < hordeSize; ++i)
		horde[i].announce();
	delete[] horde;
	return (0);
}