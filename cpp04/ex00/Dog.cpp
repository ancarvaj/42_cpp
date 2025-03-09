#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor called\n";
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog class deleted\n";
}

Dog::Dog(Dog const &copy) : Animal()
{
	std::cout << "Dog Copy constructor called\n"; 
	*this = copy;
}

Dog &Dog::operator=(Dog const &a)
{
	std::cout << "Dog assigment constructor called\n";
	if (&a != this)
		this->type = a.type;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Dogs dont meow\n";
}
