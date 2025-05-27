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
	list[id] = Contact(first_name, last_name, nickname, number, secret);
	id += 1;
	if (id == 8)
		id = 0;
}

void	PhoneBook::ft_exit()
{
	std::cout << "Thank You For Using PhoneBook" << std::endl;
	exit(0);
}

void	PhoneBook::search()
{
	Contact 	contact;
	int 		i;
	char		number;
	std::string	input;

	number = '1';
	std::cout << "Type the id of the contact you need to know" << std::endl;
	for (i = 0; i < 8; i++)
	{
		contact.show_contact(list[i], i);
		std::cout << std::endl;
	}
	std::getline(std::cin, input);
	while (number != '9')
	{
		if (input[0] == number && !input[1])
		{
			contact.print_contact(list[std::stoi(input) - 1]);
			return ;
		}
		number++;
	}
	std::cout << "invalid id" << std::endl;
	if (!std::cin)
		return ;
	search();
};
