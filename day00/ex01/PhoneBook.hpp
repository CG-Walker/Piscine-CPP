#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>

#include "contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		void	addContact(void);
		void	search(void);

	private:
		Contact	_phone_book[8];
		size_t	_size;
};

#endif