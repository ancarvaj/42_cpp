#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap ft("Carlos");

	ft.attack("pepito");
	ft.takeDamage(99);
	ft.beRepaired(99);
	ft.highFiveGuys();
	
	return (0);
}
