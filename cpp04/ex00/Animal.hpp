#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string  type; 
	public:
		virtual ~Animal();
		Animal();
		Animal(Animal const &copy);
		Animal &operator=(Animal const &a);
		const std::string	&getType() const;
		virtual void	makeSound() const;
};

#endif
