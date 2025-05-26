#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{};

void	PhoneBook::add()
{
	std::string first_name;
	std::string last_name;
	std::string	nickname;
	std::string	number;
	std::string secret;

	std::cout << "first name:" << std::endl;
	std::getline(std::cin, first_name);
	std::cout << "last name:" << std::endl;
	std::getline(std::cin, last_name);
	std::cout << "nickname:" << std::endl;
	std::getline(std::cin, nickname);
	std::cout << "phone number:" << std::endl;
	std::getline(std::cin, number);
	std::cout << "darkest secret:" << std::endl;
	std::getline(std::cin, secret);
}

void	PhoneBook::ft_exit()
{
	std::cout << "Thank You For Using PhoneBook" << std::endl;
	exit(0);
}

void	PhoneBook::search()
{};
