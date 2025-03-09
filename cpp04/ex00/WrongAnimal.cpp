#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal class deleted\n";
}
WrongAnimal::WrongAnimal()
{
	this->type = "Default";
	std::cout << "WrongAnimal Default constructor called\n";
}
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal Copy constructor called\n"; 
	*this = copy;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a)
{
	std::cout << "WrongAnimal assigment constructor called\n";
	if (&a != this)
		this->type = a.type;
	return *this;
}
const std::string	&WrongAnimal::getType () const
{
	return this->type;
}
void	WrongAnimal::makeSound() const
{
	std::cout << "Default WrongAnimals dont make sound\n";
}
