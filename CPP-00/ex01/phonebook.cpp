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

contact::contact()
{
	return ;
}

int	main()
{
	phone_book book;
	std::string	command;
	int	i;

	i = 0;
	book.set_count(i);
	book.set_max_size(i);
	for (;;)
	{
		std::cout << "Hello, please command!" << std::endl;
		std::getline(std::cin, command);
		if(command.length() == 0)
			break ;
		if (compare_strings(command) == 3)
			break ;
		else if (compare_strings(command) == 1)
		{
			if (book.get_max_size() < 8)
				book.iterate_size();
			book.add();
			book.iterate_counter();
		}
		else if (compare_strings(command) == 2)
			book.search();
		else if (!compare_strings(command))
			std::cout << "Unknown command, please try ADD, SEARCH or EXIT" << std::endl;
		else
			std::cout << std::endl;
	}
	return (0);
}
