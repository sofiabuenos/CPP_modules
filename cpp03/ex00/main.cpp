#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap ct("WeakBot");

	std::cout << BOLD_WHITE << "\nClapTrap " << ct.getName() <<  " attributes should be initialized as follows:\n" << RESET << std::endl;
	std::cout << "Hit Points = 10 and it is set to " << ct.getHitPoints() << "      ✅" << std::endl;
	std::cout << "Energy Points = 10 and it is set to " << ct.getEnergyPoints() << "   ✅" <<std::endl;
	std::cout << "Attack Demage = 0 and it is set to " << ct.getAtackDamage() << "     ✅\n" << std::endl;


	ct.attack("fly");
	ct.takeDamage(4);
	ct.beRepaired(3);
	ct.takeDamage(10);
	ct.attack("fly");
	ct.beRepaired(2);
	std::cout << std::endl;
	return (0);
}