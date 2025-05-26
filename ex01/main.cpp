#include "phonebook.hpp"

int	main()
{
	std::string command;
	PhoneBook phonebook;

	while (1)
	{
		std::cout << "WHAT WOULD YOU LIKE TO DO? type:" << std::endl;
		std::cout << "'ADD' to save a new contact" << std::endl;
		std::cout << "'SEARCH' to display a specific contact" << std::endl;
		std::cout << "'EXIT' if you want to quit the program" << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.add();
		else if (command == "EXIT")
			phonebook.ft_exit();
	}
	return 0;
}
