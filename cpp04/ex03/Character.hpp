#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
	AMateria *materia[4];
	std::string name;
	public:
		Character(std::string n);
		~Character();
		Character(Character const &);
		Character &operator=(Character const &);
		std::string const &getName();

		void use(int idx, ICharacter &);
		void unequip(int);
		void equip(AMateria *);
		std::string const &getName() const ;
};

#endif
