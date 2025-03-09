#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "";
	std::cout << "Default constructor called\n";
	hitPoints = 0;
	energy = 0;
	attackDamage = 0;
}

ClapTrap::ClapTrap( std::string n )
{
	name = n;
	std::cout << "Default constructor called\n";
	hitPoints = 10;
	energy = 10;
	attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " + name  + " was deleted\n";
}

ClapTrap::ClapTrap(ClapTrap const &ct)
{
	std::cout << "Copy constructor called\n";
	*this = ct;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &ct)
{
	std::cout << "Assigement contructor called\n";
	if (this != &ct)
	{
		this->name = ct.name;
		this->hitPoints = ct.hitPoints;
		this->energy = ct.energy;
		this->attackDamage = ct.attackDamage;
	}
	return *this;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " + this->name + " is dead\n";
		return ;
	}
	if (!this->energy)
	{
		std::cout << "ClapTrap " + this->name + " has no energy\n";
		return ;
	}
	std::cout << "ClapTrap " + this->name + " attacks " + target + ", causing " << this->attackDamage << " of damage\n";
	this->energy -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
		this->hitPoints -= amount;
	if (this->hitPoints <= 0)
	{
		this->hitPoints = 0;
		std::cout << "ClapTrap " + this->name + " took " << amount <<" damage and died\n";
	}
	else
		std::cout << "ClapTrap " + this->name + " took " << amount << " damage\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy == 0)
	{
		std::cout << "ClapTrap " + this->name + " has no energy\n";
		return ;
	}
	if (this->hitPoints<= 0)
	{
		std::cout << "ClapTrap " + this->name +  " is dead cannot be repaired\n";
		return ;
	}
	this->hitPoints += amount;
	if (this->hitPoints > 10)
		this->hitPoints = 10;
	std::cout << "ClapTrap " + this->name + " repaired itself " << amount << " damage\n";
	this->energy -= 1;
}
