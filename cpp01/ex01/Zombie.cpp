#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << this->name + " was deleted" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name + ":" + " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string n)
{
	this->name = n;
}
