#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *p = NULL;

	try{
		p = new Bureaucrat("Pepe", 250);
		if (p == NULL)
		    return 1;
		delete p;
	}catch(std::exception &e){
		std::cout << e.what() << "\n";
		delete p;
	}

	try{
 		p = new Bureaucrat("Manolo", 1);
		if (p == NULL)
		    return 1;
        p->decrementGrade(150);
		delete p;
	}catch(std::exception &e){
		std::cout << e.what() << "\n";
		delete p;
	}
	return 0; 
}
