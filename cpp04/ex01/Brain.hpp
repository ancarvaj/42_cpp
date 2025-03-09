#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	std::string ideas[100];
	public:
		~Brain();
		Brain();
		Brain(const Brain &);
		Brain &operator=(const Brain &);


		void	setIdeas(std::string const&, int const &);
		std::string const &getIdeas(int const &) const;
};




#endif
