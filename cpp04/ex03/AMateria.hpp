#ifndef A_MATERIA_HPP
#define A_MATERIA_HPP

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria(std::string const &type);
		AMateria();
		virtual ~AMateria();
		AMateria(AMateria const &copy);
		AMateria &operator=(AMateria const &copy);

		std::string const &getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif
