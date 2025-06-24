#include "Zombie.hpp"

/**
 * Exercise Goal:
 * Demonstrate the difference between stack and heap allocation in C++.
 * Using new and delete
 *
 * - Stack allocation: Objects are created within a function's scope and automatically destroyed when the scope ends.
 * - Heap allocation: Objects are created dynamically at runtime using 'new' and must be manually deleted with 'delete'.
 *
 * This example shows both approaches using the Zombie class.
 */

int	main(void)
{
	Zombie *zombie = newZombie("Foo");
	zombie->announce();
	randomChump("Rob");
	delete zombie;
	return (1);
}