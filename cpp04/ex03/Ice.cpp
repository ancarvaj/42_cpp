#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{}

Ice::~Ice(){}

Ice::Ice(Ice const &c) : AMateria()
{
	if (this != &c)
		*this = c;
}

Ice &Ice::operator=(Ice const &c)
{
	if (this != &c)
		*this = c;
	return *this;
}

AMateria *Ice::clone() const
{
	AMateria *ice = new Ice();
	return (ice);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " + target.getName() + " *\n";
}
