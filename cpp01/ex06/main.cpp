#include "Harl.hpp"

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cerr << "Harl needs an argument not NULL >:(\n";
		return (1);
	}
	for (int i=0; av[1][i]; i++)
		av[1][i] = std::tolower(av[1][i]);
	Harl harl;
	harl.complain(av[1]);
	return (0);
}
