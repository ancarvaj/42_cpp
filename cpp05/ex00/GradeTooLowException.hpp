#include "Bureaucrat.hpp"

class Bureaucrat::GradeTooLowException : public std::exception {
	public:
		const char* what() const throw();
};

