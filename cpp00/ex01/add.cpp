#include "PhoneBook.hpp"

int	cin_status()
{
	int	user = 0;
	while (1)
	{
		std::cin >> user;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Not a number, try again\n";
		}
		else
			return (user);
	}
}

int	add_contact(Contact *con)
{
	std::cout << std::endl;
	con->setName(get_contact_field("Name: "));
	if (!con->getName().compare(""))
		return (1);
	con->setLastName(get_contact_field("Last Name: "));
	if (!con->getLastName().compare(""))
		return (1);
	con->setNickname(get_contact_field("Nickname: "));
	if (!con->getNickname().compare(""))
		return (1);
	con->setPhoneNumber(get_contact_field("Phone Number: "));
	if (!con->getPhoneNumber().compare(""))
		return (1);
	con->setDarkSecret(get_contact_field("Darkest secret: "));
	if (!con->getDarkSecret().compare(""))
		return (1);
	std::cout << std::endl;
	return (0);
}
