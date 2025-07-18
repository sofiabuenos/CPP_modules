#include "ScavTrap.hpp"


/**
 * -- New concepts:
 * ✨ OVERRIDING ✨
 * -- when you redefine a method
 */
int	main(void)
{
	std::cout << BOLD_YELLOW << "\n<<<< TESTING SCAVTRAP >>>>\n" << RESET << std::endl;

	//ScavTrap a;
	ScavTrap b("Serena");
	//ScavTrap c(b);

	std::cout << BOLD_WHITE << "\nScavtrap " << b.getName() <<  " attributes should be initialized as follows:\n" << RESET << std::endl;
	std::cout << "hit Points = 100 and it is set to " << b.getHitPoints() << "      ✅" << std::endl;
	std::cout << "Energy Points = 50 and it is set to " << b.getEnergyPoints() << "     ✅" <<std::endl;
	std::cout << "Attack Demage = 20 and it is set to " << b.getAtackDamage() << "     ✅\n" << std::endl;

	b.attack("SuperBot");
	b.guardGate();
	return (0);
}