#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << name + " was deleted"<<std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name + ":" + " BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}
