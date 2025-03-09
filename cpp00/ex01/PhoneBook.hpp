#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contact[8];
	public:
		PhoneBook() {};
		Contact	getContact(size_t index){ return (contact[index]); };
		void	setContact(Contact con, size_t index) {contact[index] = con; return ;};
};

int			cin_status();
int			add_contact(Contact *con);
std::string get_contact_field(const std::string field);
void		display_specific_contact(PhoneBook book, int index);
void		cout_len(std::string str, int len);
int			search_specific_contact(PhoneBook book);
void		display_book(PhoneBook book);
void		display_book(PhoneBook book);
void		display_again(PhoneBook book);
void		search_contact(PhoneBook book);

#endif
