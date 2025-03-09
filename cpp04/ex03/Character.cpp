#include "Character.hpp"

Character::Character(std::string n)
{
	this->name = n;
	for (int i = 0; i<4; i++)
		this->materia[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i])
			delete this->materia[i];
	}
}

Character::Character(Character const &c)
{
	if (this != &c)
		*this = c;
}

Character &Character::operator=(Character const &c)
{
	if (this != &c)
	{
		this->name = c.name;
		for (int i = 0; i < 4; i++)
		{
			if (c.materia[i])
				this->materia[i] = c.materia[i]->clone();
			else
				this->materia[i] = NULL;
		}
	}
	return *this;
}

std::string const &Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] == NULL)
		{
			this->materia[i] = m;
			return ;
		}
	}
	std::cout << "I have no space to store a new materia\n";
}

void Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "what are you doing????\n";
		return ;
	}
	if (this->materia[idx])
		this->materia[idx] = 0;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "Not a valid slot\n";
		return;
	}
	if (this->materia[idx])
		this->materia[idx]->use(target);
}
