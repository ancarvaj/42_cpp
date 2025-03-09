#include "sedForLoser.hpp"

int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cerr << "Wrong number of  arg\n";
		return (1);
	}
	if (check_args(av[1], av[2], av[3]))
	{
		std::cerr << "Error in args (invalid strings or strange symbols)\n";
		return (1);
	}
	std::ifstream ifs (av[1]);
	if (!ifs.is_open() || ifs.fail())
	{
		std::cerr << "Not a valid file or is opened\n";
		return (1);
	}
	std::string rep = av[1];
	rep.append(".replace");
	std::ofstream ofs;
	ofs.open(rep.c_str(), std::ofstream::app);
	if (!ofs.is_open() || ofs.fail())
	{
		std::cerr << "Not a valid file or is opened\n";
		return (1);
	}
	std::string str;
	while (std::getline(ifs, str))
	{
		ofs << strReplace(str, av[2], av[3]);
		if (!std::getline(ifs, str))
			break ;
		else
			ofs << std::endl << strReplace(str, av[2], av[3]) << std::endl;
	}
	ifs.close();
	ofs.close();
	return (0);
}
