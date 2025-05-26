#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		void add(void);
		void search(void);
		void ft_exit(void);
	private:
		int	id = 0;
		Contact list[8];
};

#endif
