#include "Cat.hpp"

Cat::~Cat()
{
	std::cout << "Cat class deleted\n";
	delete this->brain;
}

Cat::Cat()
{
	std::cout << "Cat Default constructor called\n";
	this->type = "Cat";
	this->brain = new Brain();
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
	{
		this->type = a.type;
		for (int i = 0; i<100; i++)
			this->brain->setIdeas(a.getIdeas(i), i);
	}
	return *this;
}
void	Cat::makeSound() const
{
	std::cout << "cats dont bark\n";
}

std::string const  &Cat::getIdeas(int const &index) const
{
	return this->brain->getIdeas(index);
}
void	Cat::setIdeas(std::string const &idea, int const &i)
{
	this->brain->setIdeas(idea, i);
}
