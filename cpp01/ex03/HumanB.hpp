#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	Weapon		*weapon;
	std::string	name;
	public:
		HumanB(std::string n) : name(n) {};
		HumanB(){};
		void	setWeapon(Weapon&);
		void	attack();
};

#endif
