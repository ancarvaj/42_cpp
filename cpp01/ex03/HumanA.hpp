#ifndef HUMANA_CPP
#define HUMANA_CPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	std::string name;
	Weapon &weapon;
	public:
		HumanA(std::string n, Weapon &w) : name(n), weapon(w){}; 
		void	attack();
};

#endif
