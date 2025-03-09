#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &w)
{
	weapon = &w;
};

void	HumanB::attack()
{
	std::cout << name + " attacks with their weapon " + weapon->getType() << std::endl;
};
