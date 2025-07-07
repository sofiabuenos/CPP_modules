#include "FragTrap.hpp"

int	main(void)
{
	std::cout << BOLD_YELLOW << "\n<<<< TESTING FRAGTRAP >>>>\n" << RESET << std::endl;

	FragTrap frag("Flander");

	std::cout << BOLD_WHITE << "\nFragTrap " << frag.getName() <<  " attributes should be initialized as follows:\n" << RESET << std::endl;
	std::cout << "hit Points = 100 and it is set to " << frag.getHitPoints() << "      ✅" << std::endl;
	std::cout << "Energy Points = 100 and it is set to " << frag.getEnergyPoints() << "   ✅" <<std::endl;
	std::cout << "Attack Demage = 30 and it is set to " << frag.getAtackDamage() << "     ✅\n" << std::endl;

	frag.attack("Rob");
	frag.highFivesGuys();
	return (0);
}