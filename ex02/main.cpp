#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "*--------------ClapTrap--------------*" << std::endl;
	std::cout << std::endl;

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

	std::cout << std::endl;
	std::cout << "*--------------ScavTrap--------------*" << std::endl;
	std::cout << std::endl;

	ScavTrap nedStark("Ned Stark");
	nedStark.attack("King Joffrey");
	nedStark.takeDamage(10);
	nedStark.beRepaired(10);
	nedStark.guardGate();

	std::cout << std::endl;
	std::cout << "*--------------FragTrap--------------*" << std::endl;
	std::cout << std::endl;

	FragTrap cerseiLannister("Cersei Lannister");
	cerseiLannister.attack("Daenerys Targaryen");
	cerseiLannister.takeDamage(10);
	cerseiLannister.beRepaired(10);
	cerseiLannister.highFivesGuys();

	std::cout << std::endl;
	std::cout << "*--------------END--------------*" << std::endl;
	std::cout << std::endl;
}
