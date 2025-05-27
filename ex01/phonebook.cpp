#include "phonebook.hpp"
#include "contact.hpp"

PhoneBook::PhoneBook(void)
{};

void	PhoneBook::add()
{
	std::string first_name;
	std::string last_name;
	std::string	nickname;
	std::string	number;
	std::string secret;

	std::cout << "\033[1;81mfirst name:\033[0m" << std::endl;
	std::getline(std::cin, first_name);
	std::cout << "\033[1;81mlast name:\033[0m" << std::endl;
	std::getline(std::cin, last_name);
	std::cout << "\033[1;81mnickname:\033[0m" << std::endl;
	std::getline(std::cin, nickname);
	std::cout << "\033[1;81mphone number:\033[0m" << std::endl;
	std::getline(std::cin, number);
	std::cout << "\033[1;81mdarkest secret:\033[0m" << std::endl;
	std::getline(std::cin, secret);
	list[id % 8] = Contact(first_name, last_name, nickname, number, secret);
	id += 1;
}

void	PhoneBook::ft_exit()
{
	std::cout << "\033[1;97mThank You For Using PhoneBook\033[0m" << std::endl;
	exit(0);
}

void	PhoneBook::search()
{
	Contact 	contact;
	int 		i;
	char		number;
	std::string	input;

	if (id == 0)
	{
		std::cout << "\033[1;91mNo contact saved\033[0m" << std::endl;
		return ;
	}
	number = '1';
	std::cout << "\033[1;81mType the id of the contact you need to know\033[0m" << std::endl;
	for (i = 0; i < 8; i++)
	{
		if (i < id)
		{
			contact.show_contact(list[i], i);
			std::cout << std::endl;
		}
	}
	std::getline(std::cin, input);
	while (number != '9')
	{
		if (stoi(input) <= id && input[0] == number && !input[1])
		{
			contact.print_contact(list[std::stoi(input) - 1]);
			return ;
		}
		number++;
	}
	std::cout << "\033[1;91minvalid id\033[0m" << std::endl;
	if (!std::cin)
		return ;
	search();
};
