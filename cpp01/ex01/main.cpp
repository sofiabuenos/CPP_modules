#include "Zombie.hpp"

/**
 * Exercise Goal:
 * Demonstrate dynamic memory allocation for arrays in C++ using the Zombie class.
 *
 * Key Concepts:
 * - Heap allocation with 'new' for arrays.
 * - Manual memory management with 'delete[]'.
 * - Importance of matching 'new[]' with 'delete[]'.
*/


int	main(void)
{
	int hordeSize = 4;
	Zombie* horde = zombieHorde(hordeSize, "Rotter");
	for (int i = 0; i < hordeSize; ++i)
		horde[i].announce();
	delete[] horde;
	return (0);
}