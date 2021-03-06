#include "phonebook.hpp"

void	print_promt(std::string	string)
{
	std::string	resized_string;
	if (string.size() > 10)
	{
		resized_string = string;
		resized_string.resize(9);
		std::cout << resized_string;
		std::cout << '.';
		std::cout << '|'; 
	}
	else
	{
		resized_string = string;
		resized_string.resize(10, ' ');
		std::cout << resized_string;
		std::cout << '|'; 
	}

}

void	Phone_book::print_fields(int index)
{
	std::cout << "First name: " << this->human[index].get_fname() << std::endl;
	std::cout << "Last name: " << this->human[index].get_lastname() << std::endl;
	std::cout << "Nickname: " << this->human[index].get_nickname() << std::endl;
	std::cout << "Phone number: " << this->human[index].get_phone_number() << std::endl;
	std::cout << "Darkest secret (please, don't tell anyone): " << this->human[index].get_ds() << std::endl;
}

void	Phone_book::search()
{
	std::string	index;
	int	index_number;

	print_promt("Index");
	print_promt("First name");
	print_promt("Last name");
	print_promt("Nickname");
	std::cout << std::endl;
	for (int i = 0; i < this->max_size; i++)
	{
		std::cout << std::setw(10) << this->human[i].get_index() << '|';
		print_promt(this->human[i].get_fname());
		print_promt(this->human[i].get_lastname());
		print_promt(this->human[i].get_nickname());
		std::cout << std::endl;
	}
	if (this->member_count > 0)
	{
		for(;;)
		{
			std::cout << "Please, enter preferable contact's index or 9 for exit" << std::endl;
			std::getline(std::cin, index);
			if (index.size() > 1)
				std::cout << "Unknown index, please type again or type 9 to exit" << std::endl;
			else
			{
				index_number = std::atoi(index.c_str());
				if (index_number == 0)
					std::cout << "Unknown index, please type again or type 9 to exit" << std::endl;
				else if (index_number == 9)
					break ;
				else if (index_number <= this->max_size)
				{
					this->print_fields(index_number - 1);
					break ;
				}
				else
					std::cout << "Unknown index, please type again or type 9 to exit" << std::endl;
			}
		}
	}
	else
		std::cout << "Your phonebook is empty :(" << std::endl;

}

void	Phone_book::add()
{
	std::string	input;

	this->human[this->member_count % 8].set_index(this->member_count % 8 + 1);

	std::cout << "Please, enter first name" << std::endl;
	for (;;)
	{
		std::getline(std::cin, input);
		if (input.length())
		{
			this->human[this->member_count % 8].set_first_name(input);
			break ;
		}
		else
			std::cout << "Field is empty. Please, enter first name" << std::endl;
	}

	std::cout << "Please, enter last name" << std:: endl;
	for (;;)
	{
		std::getline(std::cin, input);
		if (input.length())
		{
			this->human[this->member_count % 8].set_last_name(input);
			break ;
		}
		else
			std::cout << "Field is empty. Please, enter last name" << std::endl;
	}

	std::cout << "Please, enter nickname" << std:: endl;
	for (;;)
	{
		std::getline(std::cin, input);
		if (input.length())
		{
			this->human[this->member_count % 8].set_nickname(input);
			break ;
		}
		else
			std::cout << "Field is empty. Please, enter nickname" << std::endl;
	}

	std::cout << "Please, enter phone number" << std:: endl;
	for (;;)
	{
		std::getline(std::cin, input);

		int number = 1;
		for (int i = 0; input.c_str()[i]; i++)
			if (!std::isdigit(input.c_str()[i]))
				if (i == 0 && input.c_str()[i] != '+')
					number = 0;
		if (number <= 0)
		{
			std::cout << "Phone number must contain only digits or plus sign at the begining, please try again" << std::endl;
			continue ;
		}
		if (input.length())
		{
			this->human[this->member_count % 8].set_phone_number((input));
			break ;
		}
		else
			std::cout << "Field is empty. Please, enter phone number" << std::endl;
	}


	std::cout
		<< "Please, enter member's darkest secret, I will not tell anyone"
			<< std:: endl;
	for (;;)
	{
		std::getline(std::cin, input);
		if (input.length())
		{
			this->human[this->member_count % 8].set_ds(input);
			break ;
		}
		else
			std::cout << "Field is empty. Please, enter darkest secret" << std::endl;
	}

}

int	Phone_book::get_count()
{
	return (member_count);
}

int	Phone_book::set_count(int number)
{
	member_count = number;
	return (member_count);
}

int	Phone_book::iterate_counter()
{
	member_count += 1;
	return (member_count);
}

int	Phone_book::iterate_size()
{
	max_size += 1;
	return (max_size);
}

int	Phone_book::set_max_size(int number)
{
	max_size = number;
	return (max_size);
}

int	Phone_book::get_max_size()
{
	return (max_size);
}
