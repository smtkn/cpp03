#include "ClapTrap.hpp"

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
}