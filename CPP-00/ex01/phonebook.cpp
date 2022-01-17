#include "./phonebook.hpp"

phone_book::phone_book()
{
	return ;
}

int	compare_strings(std::string command)
{
	if (!command.compare("ADD"))
		return (1);
	else if (!command.compare("SEARCH"))
		return (2);
	else if (!command.compare("EXIT"))
		return (3);
	return (0);
}

member::member()
{
	return ;
}

int	main()
{
	phone_book book;

	book.set_count(0);
	while (1)
	{
		std::cout << "Hello, please command!" << std::endl;
		std::string	command;
		std::getline(std::cin, command);
		if (compare_strings(command) == 3)
			break ;
		else if (compare_strings(command) == 1)
		{
			book.iterate_counter();
			book.add();
			if (book.get_count() > 9)
				book.set_count(0);
		}
		else if (compare_strings(command) == 2)
			;
		else
			std::cout << "Unknown command, please try ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}
