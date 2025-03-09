#include "WrongCat.hpp"

WrongCat::~WrongCat()
{
	std::cout << "WrongCat class deleted\n";
}
WrongCat::WrongCat()
{
	std::cout << "WrongCat Default constructor called\n";
	this->type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal()
{
	std::cout << "WrongCat Copy constructor called\n"; 
	*this = copy;
}
WrongCat &WrongCat::operator=(const WrongCat &a)
{
	std::cout << "WrongCat assigment constructor called\n";
	if (&a != this)
		this->type = a.type;
	return *this;
}
void	WrongCat::makeSound() const
{
	std::cout << "Wrongcats dont bark\n";
}
