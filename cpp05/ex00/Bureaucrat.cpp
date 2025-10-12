#include "Bureaucrat.hpp"
#include "GradeTooLowException.hpp"
#include "GradeTooHighException.hpp"

Bureaucrat::Bureaucrat(): name("Basic Bureaucrat"), grade(150){}

Bureaucrat::Bureaucrat(const std::string &n, int g):name(n){
	if (g > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (g < 1)
		throw Bureaucrat::GradeTooHighException();
    this->grade = g;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): name(copy.getName()), grade(copy.getGrade()) {}

Bureaucrat::~Bureaucrat(){}

const std::string& Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const{
	return this->grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (this != &copy){
		this->grade = copy.getGrade();
	}
	return *this;
}

void Bureaucrat::incrementGrade()
{
	if (this->grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
    else	
        this->grade--;
}

void Bureaucrat::incrementGrade(int increment)
{
	if (increment < 0){
		std::cout << "Increment must be a positive integer." << std::endl;
		return ;
	}
	if (this->grade - increment < 1)
		throw Bureaucrat::GradeTooHighException();
    else	
        this->grade-=increment;
}

void Bureaucrat::decrementGrade(){
	if (this->grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
    else	
        this->grade++;
}

void Bureaucrat::decrementGrade(int decrement){
	if (decrement < 0){
		std::cout << "Decrement must be a positive integer." << std::endl;
		return ;
	}
	if (this->grade + decrement > 150)
		throw Bureaucrat::GradeTooLowException();
    else	
        this->grade+= decrement;
}
