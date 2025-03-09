#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
	Brain *brain;
	public:
		~Cat();
		Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat &a);
		
		
		std::string const &getIdeas(int const &) const;
		void	setIdeas(std::string const &, int const &);
		void	makeSound() const;
};




#endif
