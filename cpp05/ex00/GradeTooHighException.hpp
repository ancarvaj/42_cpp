#include "Bureaucrat.hpp"

class Bureaucrat::GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
};

