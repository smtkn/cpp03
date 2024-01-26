#include "ClapTrap.hpp"

int main()
{
	std::cout << "*--------------Testing--------------*" << std::endl;
	ClapTrap dummy;
	ClapTrap johnSnow("John Snow");
	ClapTrap jamieLannister("Jaime Lannister");

	dummy.attack("Enemy");
	dummy.takeDamage(10);
	dummy.takeDamage(10);
	dummy.beRepaired(5);

	johnSnow.attack("Dragon");
	johnSnow.takeDamage(10);
	johnSnow.beRepaired(3);

	jamieLannister.attack("White Walker");
	jamieLannister.takeDamage(10);
	jamieLannister.beRepaired(3);
}