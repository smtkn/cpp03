#include "ScavTrap.hpp"

int main()
{
	std::cout << "*--------------Testing--------------*" << std::endl;
	ClapTrap soldier;
	ClapTrap soldier_2("solider");

	soldier.attack("two enemy");
	soldier.takeDamage(10);
	soldier.takeDamage(10);
	soldier.beRepaired(5);
	soldier.attack("a enemy");
	soldier_2.beRepaired(3);
	soldier_2.takeDamage(10);

	std::cout << "*-----------------------------------*" << std::endl;

	ScavTrap scav("abc");
	scav.attack("123");
	scav.takeDamage(10);
	scav.beRepaired(10);
	scav.guardGate();
}