#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string n )
{
	std::cout << "Default ScavTrap constructor called\n";
	name = n;
	hitPoints = 100;
	energy = 50;
	attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " + this->name + " was deleted\n";
}

ScavTrap::ScavTrap(const ScavTrap &st)
{
	std::cout << "Copy ScavTrap constructor called\n";
	*this = st;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &st)
{
	std::cout << "Assigement ScavTrap contructor called\n";
	if (this != &st)
	{
		this->name = st.name;
		this->hitPoints = st.hitPoints;
		this->energy = st.energy;
		this->attackDamage = st.attackDamage;
	}
	return *this;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->hitPoints <= 0 || !this->energy)
		return ;
	std::cout << "ScavTrap " + this->name + " attacks " + target + ", causing " << this->attackDamage << " of damage\n";
	this->energy -= 1;
}

void	ScavTrap::guardGate(void)
{
	if (!this->hitPoints)
	{
		std::cout << "ScavTrap " + this->name + "is dead\n";
		return ;
	}
	if (this->energy <= 0)
	{
		std::cout << "ScavTrap " + this->name + "has no energy\n";
		return ;
	}
	std::cout << "ScavTrap " + this->name + " is now in guard mode\n";
}
