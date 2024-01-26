#include "ClapTrap.hpp"

//Constructor
ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
	this->name = "DefaultName";
	this->hit_points = 10;
	this->energy_points = 10;
	this->atack_damage = 0;
}
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->atack_damage = 0;
}

//Copy Constructor
ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClatTrap Copy constructor called" << std::endl;
	*this = copy;
}

//Operator overloading=
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if(this != &other)
	{
	this->name = other.name;
	this->atack_damage = other.atack_damage;
	this->energy_points = other.energy_points;
	this->energy_points= other.energy_points;
	}
	return (*this);
}

//Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

//Getter Methods
std::string ClapTrap::getName() const
{
	return (this->name);
}
int ClapTrap::getHitPoints() const
{
	return (this->hit_points);
}
int ClapTrap::getEnergyPoints() const
{
	return (this->energy_points);
}
int ClapTrap::getAtackDamage() const
{
	return (this->atack_damage);
}

//Setter Methods
void ClapTrap::setName(std::string name)
{
	this->name = name;
}
void ClapTrap::setHitPoints(int hp)
{
	this->hit_points = hp;
}
void ClapTrap::setEnergyPoints(int energy)
{
	this->energy_points = energy;
}
void ClapTrap::setAtackDamage(int damage)
{
	this->atack_damage = damage;
}

//Member Functions
void	ClapTrap::attack(const std::string &target)
{
	if(this->energy_points > 0 && this->hit_points > 0)
	{
		std::cout << "ClatTrap " << this->name << " attacks " << target << ", causing " << this->atack_damage << " points of damage!" << std::endl;
		this->energy_points--;
	}
	else if (this->energy_points == 0)
		std::cout << "ClapTrap " << this->name << " is not able to attack " << target << ", because he has no energy points left." << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " is not able to attack " << target << ", because he has not enough hit points." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " took " << amount << " points of damage!" << std::endl;
		this->hit_points -= amount;
	}
	else
		std::cout << "STOP! ClapTrap " << this->name << " is already dead :(" << std::endl;
	if (this->hit_points < 0)
		this->hit_points = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if(this->energy_points > 0 && this->hit_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " healed " << amount << " Points." << std::endl;
		this->hit_points += amount;
		this->energy_points--;
	}
	if (this->hit_points <= 0)
		std::cout << "Cannot repair because: ClapTrap " << this->name << " is dead." << std::endl;
	else if (!this->energy_points)
		std::cout << "ClapTrap " << this->name << " is out of energy points!" << std::endl;
}