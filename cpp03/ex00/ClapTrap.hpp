#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
	std::string name;
	int			hitPoints;
	int			energy;
	int			attackDamage;

	public:
		ClapTrap(std::string);
		~ClapTrap();
		ClapTrap(ClapTrap const&);
		ClapTrap &operator=(ClapTrap const&);
		
		void	attack(const std::string&);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);
};

#endif
