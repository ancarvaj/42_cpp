#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[DEBUG]\n";
	std::cout<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n";
	std::cout << "I reaaly do!\n"; 

}

void	Harl::info(void)
{
	std::cout << "[INFO]\n";
	std::cout << "I cannot believe adding extra bacon costs more money\n.";
	std::cout << "You didn’t put enough bacon in my burger!\n";
	std::cout << "If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout <<  "[WARNING]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I’ve been coming for years whereas you started working here since last month.\n";
}

void	Harl::error(void)
{
	std::cout << "[ERROR]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

int leveltoint(std::string level)
{
	if (!level.compare("debug"))
		return (1);
	else if (!level.compare("info"))
		return (2);
	else if (!level.compare("warning"))
		return (3);
	else if (!level.compare("error"))
		return (4);
	return (0);
}

void	Harl::complain(std::string level)
{
	int lev = leveltoint(level);

	switch (lev)
	{
		case 1:
			debug();
		case 2:
			info();
		case 3:
			warning();
		case 4:
			error();
			break;
		default:
			std::cout << "[Probably complaining about insignificant problems]\n";
			break;
	}
}
