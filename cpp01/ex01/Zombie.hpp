#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie 
{
	std::string name;
	public:
		Zombie(){};
		Zombie(std::string n): name(n){};
		~Zombie();
		
		void	announce(void);
		void	setName(std::string);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
