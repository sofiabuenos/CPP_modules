#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie = newZombie("Foo");
	zombie->announce();
	randomChump("Rob");
	delete zombie;
	return (1);
}