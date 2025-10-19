#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string&, int);
		Bureaucrat(const Bureaucrat&);
		
		~Bureaucrat();
		
		Bureaucrat &operator=(const Bureaucrat &);
		
		const std::string& getName() const;
		int getGrade() const;
		
		void incrementGrade();
		void incrementGrade(int);
		void decrementGrade();
		void decrementGrade(int);

		class GradeTooHighException;
		class GradeTooLowException;
};

#endif
