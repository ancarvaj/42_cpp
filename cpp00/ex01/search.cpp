#include "PhoneBook.hpp"

std::string	get_contact_field(const std::string field)
{
	std::string str;

	std::cout << field;
	getline(std::cin, str);
	return (str);
}



void	display_specific_contact(PhoneBook book, int index)
{
	std::cout << std::endl;
	std::cout << "Name: " << book.getContact(index).getName() << std::endl;
	std::cout << "Last Name: " << book.getContact(index).getLastName() << std::endl;
	std::cout << "Nickname: "<< book.getContact(index).getNickname() << std::endl;
	std::cout << "Phone Number: " << book.getContact(index).getPhoneNumber() << std::endl;
	std::cout << "Dark secret: "<< book.getContact(index).getDarkSecret() << std::endl;
	std::cout << std::endl;
}

void	cout_len(std::string str, int len)
{
	if (str.length() > 10)
	{
		str = str.substr(0,10);
		str[9] = '.';
	}
	std::cout << std::setw(len) << std::right << str << "|";
}

int	search_specific_contact(PhoneBook book)
{
	int i = 0;
	std::cout << "\nWhich contact do you want to see?\nenter a number betwen 1 and 8\n";
	std::cout << "if you dont want to see a specific contact enter the number 0\n\n";
	i = cin_status();
	while (i < 1 || i  > 8 || !book.getContact(i - 1).getName().compare(""))
	{
		if (i == 0)
			return 1;
		std::cout << "Wrong contact, enter a new one\n";
		i = cin_status();
	}
	display_specific_contact(book, i - 1);
	return (0);
}

void	display_again(PhoneBook book)
{
	std::string user;
	while (user.compare("no"))
	{
		std::cout << "do you want to see a new contact? yes/no\n";
		std::cin >> user;
		std::cout << std::endl;
		if (!user.compare("yes"))
		{
			if (search_specific_contact(book))
				return ;
		}
		else
			continue ;
	}
}

void	display_book(PhoneBook book)
{
	int	i = -1;

	std::cout << std::endl;
	cout_len("Index", 10);
	cout_len("First Name", 10);
	cout_len("Last Name", 10);
	cout_len("Nickname", 10);
	std::cout << std::endl;
	while (++i < 8 && book.getContact(i).getName().compare(""))
	{
		std::cout << std::setw(10) << std::right << i + 1 << "|";
		cout_len(book.getContact(i).getName(), 10);
		cout_len(book.getContact(i).getLastName(), 10);
		cout_len(book.getContact(i).getNickname(), 10);
		std::cout << std::endl;
	}
}

void	search_contact(PhoneBook book)
{
	display_book(book);
	if (!search_specific_contact(book))
		display_again(book);
	std::cout << std::endl;
}
