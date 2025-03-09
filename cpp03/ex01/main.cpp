#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap st("Trump");
	ScavTrap st1("Manolo");

	std::cout << "\nTrump actions\n";
	st.attack("pepito");
	st.takeDamage(100);
	st.beRepaired(99);

	std::cout << "\nManolo actions\n";
	st1.attack("Jose");
	st1.takeDamage(99);
	st1.beRepaired(99);
	st1.guardGate();
	std::cout << std::endl;
	return (0);
}
