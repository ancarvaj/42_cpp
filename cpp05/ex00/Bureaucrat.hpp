#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat : public GradeTooHighException, public GradeTooLowException {
private:
    const std::string name;
    int grade;
public:
    const std::string& getName() const;
    const int& getGrade() const;
    void incrementGrade();
    void decrementGrade();
};

class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw() {
            return "Grade is too high";
        }
};

class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw() {
            return "Grade is too low";
        }
};

#endif