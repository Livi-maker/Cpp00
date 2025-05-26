#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {

	public:
		Contact(void);
		Contact(std::string first_name, std::string last_name, std::string nickname, std::string number, std::string secret);
		void show_contact(Contact contact, int id);
		void print_contact(Contact contact);

	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string number;
		std::string secret;
};

#endif
