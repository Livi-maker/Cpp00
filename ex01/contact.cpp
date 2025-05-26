#include "contact.hpp"

Contact::Contact(void)
{};

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string number, std::string secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->number = number;
	this->secret = secret;
};

void	Contact::print_contact(Contact contact)
{
	std::cout << "FIRST NAME: " << contact.first_name << std::endl;
	std::cout << "LAST NAME: " << contact.last_name << std::endl;
	std::cout << "NICKNAME: " << contact.nickname << std::endl;
	std::cout << "PHONE NUMBER: " << contact.number << std::endl;
	std::cout << "DARKEST SECRET: " << contact.secret << std::endl;
}

void	Contact::show_contact(Contact contact, int id)
{
	std::cout << id + 1 << " | " << contact.first_name << " | ";
	std::cout << contact.last_name << " | " << contact.nickname;
}
