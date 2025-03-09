#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->type = "Default";
	std::cout << "Animal Default constructor called\n";
}

AAnimal::~AAnimal()
{
	std::cout << "Animal class deleted\n";
}

AAnimal::AAnimal(AAnimal const &copy)
{
	std::cout << "Animal Copy constructor called\n"; 
	*this = copy;
}

AAnimal &AAnimal::operator=(AAnimal const &a)
{
	std::cout << "Animal assigment constructor called\n";
	if (&a != this)
		this->type = a.type;
	return *this;
}

const std::string	&AAnimal::getType() const
{
	return this->type;
}
