#include "Zombie.hpp"

int main(void)
{
	Zombie *z = zombieHorde(10, "manolo");
	
	for (int i=0; i<10; i++)
		z[i].announce();

	delete []z;
	return (0);
}
