#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
	public:
		~Cat();
		Cat();
		Cat(Cat const &copy);
		Cat &operator=(Cat const &a);
		void	makeSound() const;
};

#endif
