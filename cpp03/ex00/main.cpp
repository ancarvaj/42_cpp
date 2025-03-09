#include "ClapTrap.hpp"

int main()
{
	ClapTrap ct1("Roberto");
	const  ClapTrap *ct2 = new ClapTrap(ct1);
	ClapTrap ct("Enrique");

	std::cout << "\nSofia actions\n";
	ct2->attack("Pedro");
	ct2->takeDamage(10);
	ct2->beRepaired(10);
	std::cout << "\nEnrique actions\n";
	ct.attack("Santiago");
	ct.takeDamage(9);
	ct.beRepaired(9);
	delete ct2;
	return (0);
}
