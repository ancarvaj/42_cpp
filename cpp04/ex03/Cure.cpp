#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}
Cure::~Cure(){}

Cure::Cure(Cure const &c) : AMateria()
{
	if (this != &c)
		*this = c;
}

Cure &Cure::operator=(Cure const &c)
{
	if (this != &c)
		*this = c;
	return *this;
}

AMateria *Cure::clone() const
{
	AMateria *cure = new Cure();
	return (cure);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " + target.getName() + "`s wounds *\n";
}
