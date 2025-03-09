#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
	Brain *brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &a);
		void	makeSound() const;
		std::string const &getIdeas(int const &) const;
		void setIdeas(std::string const &, int const &);
};


#endif
