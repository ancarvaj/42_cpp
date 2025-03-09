#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal
{
	protected:
		std::string  type; 
	public:
		virtual ~AAnimal();
		AAnimal();
		AAnimal(AAnimal const &copy);
		AAnimal &operator=(AAnimal const &a);
		const std::string	&getType() const;
		virtual void	makeSound() const = 0;
};

#endif
