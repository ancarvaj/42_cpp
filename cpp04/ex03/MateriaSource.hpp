#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *materia[4];
	public:
		~MateriaSource();
		MateriaSource();
		MateriaSource(MateriaSource const &a);
		MateriaSource &operator=(MateriaSource const &a);

		void learnMateria(AMateria *);
		AMateria *createMateria(std::string const &type);
};

#endif
