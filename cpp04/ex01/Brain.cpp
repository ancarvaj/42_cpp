#include "Brain.hpp"

Brain::~Brain()
{
	std::cout << "brain destructor\n";
}

Brain::Brain()
{
	std::cout << "brain constructor\n";
}

Brain::Brain(Brain const &brain)
{
	std::cout << "braina copy constructor\n";
	if (this != &brain)
		*this = brain;
}

Brain &Brain::operator=(Brain const &brain)
{
	std::cout << "operator constructor called\n";
	if (this == &brain)
		return *this;
	for (int i = 0; i < 100; i++)
		this->setIdeas(brain.getIdeas(i), i);
	return *this;
}

void	Brain::setIdeas(std::string const &idea, int const &index)
{
	if (idea != this->ideas[index])
		this->ideas[index] = idea;
}

std::string const &Brain::getIdeas(int const &index) const
{
	return this->ideas[index];
}
