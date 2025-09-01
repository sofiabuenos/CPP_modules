#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

/*
 * Exercise goal:
 * Put into practice the concepts learned in the previous exercise:
 * - in which case it would be best to use a pointer to Weapon vs a reference to Weapon?
 * A: - When I want a human to posess no Weapon - pointer
 *    - When I want a human to point to other weapon objects - pointer
 *    - When I don't want a human to point to another object - reference
 *    - When initializing with a weapon is mandatory - reference
*/

int	main(void)
{
	Weapon sword("long sword");
	Weapon blade ("shadow blade");

	std::cout << BOLD_WHITE << "test 1: Aragon vs unarmed Gollum" << RESET << std::endl;
	HumanA aragon("Aragon", sword);
	HumanB gollum("Gollum");
	aragon.attack();
	gollum.attack();
	std::cout << BOLD_WHITE << "test 2: changes in sword must be reflected on both characters" << RESET << std::endl;
	sword.setType("Elfic sward");
	gollum.setWeapon(sword);
	aragon.attack();
	gollum.attack();
	std::cout << BOLD_WHITE << "test 3: since HumanB takes a pointer, Gollum can point to another Weapon object" << RESET << std::endl;
	gollum.setWeapon(blade);
	aragon.attack();
	gollum.attack();
	return (0);
}

// int main()
// {
// 	{
// 		Weapon club = Weapon("crude spiked club");
// 		HumanA bob("Bob", club);
// 		bob.attack();
// 		club.setType("some other type of club");
// 		bob.attack();
// 	}
// 	{
// 		Weapon club = Weapon("crude spiked club");
// 		HumanB jim("Jim");
// 		jim.setWeapon(club);
// 		jim.attack();
// 		club.setType("some other type of club");
// 		jim.attack();
// 	}
// 	return 0;
// }