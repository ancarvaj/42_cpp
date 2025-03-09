#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Default";
	std::cout << "Animal Default constructor called\n";
}

Animal::~Animal()
{
	std::cout << "Animal class deleted\n";
}

Animal::Animal(Animal const &copy)
{
	std::cout << "Animal Copy constructor called\n"; 
	*this = copy;
}

Animal &Animal::operator=(Animal const &a)
{
	std::cout << "Animal assigment constructor called\n";
	if (&a != this)
		this->type = a.type;
	return *this;
}

const std::string	&Animal::getType() const
{
	return this->type;
}

void	Animal::makeSound() const
{
	std::cout << "Default Animals dont make sound\n";
}
