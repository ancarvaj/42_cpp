#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor called\n";
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog class deleted\n";
}

Dog::Dog(Dog const &copy) : AAnimal()
{
	std::cout << "Dog Copy constructor called\n"; 
	*this = copy;
}

Dog &Dog::operator=(Dog const &a)
{
	std::cout << "Dog assigment constructor called\n";
	if (&a != this)
	{
		this->type = a.type;
		for (int i = 0; i < 100; i++)
			this->brain->setIdeas(a.brain->getIdeas(i), i);
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Dogs dont meow\n";
}

std::string const &Dog::getIdeas(int const &i) const
{
	return this->brain->getIdeas(i);
}

void Dog::setIdeas(std::string const &idea, int const &i)
{
	this->brain->setIdeas(idea, i);
}
