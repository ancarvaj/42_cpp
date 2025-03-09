#include "Zombie.hpp"

int main(void)
{
	Zombie *z = newZombie("sofia");
	z->announce();
	{
		Zombie z1("manolo");
		z1.announce();
	}
	randomChump("pepe");
	delete z;
	return (0);
}
