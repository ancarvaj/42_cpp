#include "PhoneBook.hpp"

int	main(void)
{
	int	i = 0;
	std::string str;
	Contact	contact;
	PhoneBook book;

	std::cout << "COMMANDS: ADD, SEARCH, EXIT\n\n";
	while (1)
	{
		getline(std::cin, str);
		if (i > 7)
			i = 0;
		if (!str.compare("ADD"))
		{
			if (!add_contact(&contact))
			{
				book.setContact(contact, i);
				i++;
				std::cout << "COMMANDS: ADD, SEARCH, EXIT\n\n";
			}
			else
				std::cout << "EMPTY FIELD!!!!\n\n";
		}
		else if (!str.compare("SEARCH"))
		{
			search_contact(book);
		}
		else if (!str.compare("EXIT"))
			break ;
		else
			std::cout << "COMMANDS: ADD, SEARCH, EXIT\n\n";
	}
	std::cout << "\nExiting program successfully...\n\n";
	return (0);
}
