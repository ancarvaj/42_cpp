#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] != NULL)
			delete this->materia[i];
	}
}

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	if (this != &copy)
		*this = copy;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &copy)
{
	for (int i = 0; i<4; i++)
	{
		if (copy.materia[i])
			this->materia[i] = copy.materia[i]->clone();
		else
			this->materia[i] = NULL;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *newMateria)
{
	static int i = 0;
	if (i > 3)
	{
		std::cout << "Cannot learn a new materia\n";
		return;
	}
	this->materia[i] = newMateria;
	i++;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	if (type == "ice")
	{
		for (int i = 3; i >= 0; i--)
		{
			if (this->materia[i] != NULL && this->materia[i]->getType() == "ice")
				return this->materia[i]->clone();
		}
	}
	if (type == "cure")
	{
		for (int i = 3; i >= 0; i--)
		{
			if (this->materia[i] != NULL && this->materia[i]->getType() == "cure")
				return this->materia[i]->clone();
		}
	}
	std::cout << "materia " + type + " not learned yet\n";
	return NULL;
}
