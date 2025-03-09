#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie 
{
	std::string name;
	public:
		Zombie(std::string n): name(n){}
		~Zombie();
		void	announce(void);
};


Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
