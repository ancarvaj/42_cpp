#include "Cat.hpp"

Cat::~Cat()
{
	std::cout << "Cat class deleted\n";
}

Cat::Cat()
{
	std::cout << "Cat Default constructor called\n";
	this->type = "Cat";
}

Cat::Cat(const Cat &copy) : Animal()
{
	std::cout << "Cat Copy constructor called\n"; 
	*this = copy;
}
Cat &Cat::operator=(const Cat &a)
{
	std::cout << "Cat assigment constructor called\n";
	if (&a != this)
		this->type = a.type;
	return *this;
}
void	Cat::makeSound() const
{
	std::cout << "cats dont bark\n";
}
