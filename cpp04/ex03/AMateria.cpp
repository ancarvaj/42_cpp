#include "AMateria.hpp"

AMateria::~AMateria(){}
AMateria::AMateria()
{}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}
AMateria::AMateria(AMateria const &copy)
{
	if (this != &copy)
		*this = copy;
}
AMateria &AMateria::operator=(AMateria const &a)
{
	if (this != &a)
		*this = a;
	return *this;
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "use from Amateia: this should not print" + target.getName() << std::endl;
}
