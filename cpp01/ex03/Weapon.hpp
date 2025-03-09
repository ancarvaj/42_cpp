#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <iomanip>

class Weapon
{
	std::string type;
	public:
		Weapon(){};
		Weapon(std::string t): type(t) {};
		const std::string &getType();
		void setType(std::string);
};

#endif
