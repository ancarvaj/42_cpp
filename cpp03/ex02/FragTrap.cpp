#include "FragTrap.hpp"

FragTrap::FragTrap(std::string n)
{
	std::cout << "FragTrap constructor called\n";
	this->name = n;
	hitPoints = 100;
	energy = 100;
	attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " + this->name + " Was deleted\n";
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "proud of you!!!\n";
	std::cout << "Awesome!!\n";
	std::cout << "Good job!!\n";
	std::cout << "WOW\n";
}
