#include "phonebook.hpp"

void	print_promt(std::string	string)
{
	std::string	resized_string;
	resized_string = string;
	resized_string.resize(10, ' ');
	std::cout << resized_string;
	std::cout << '|'; 
}

void	phone_book::print_fields(int index)
{
	std::cout << "First name: " << this->human[index].get_fname() << std::endl;
	std::cout << "Last name: " << this->human[index].get_lastname() << std::endl;
	std::cout << "Nickname: " << this->human[index].get_nickname() << std::endl;
	std::cout << "Phone number: " << this->human[index].get_phone_number() << std::endl;
	std::cout << "Darkest secret (please, don't tell anyone): " << this->human[index].get_ds() << std::endl;
}

void	phone_book::search()
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
		std::cout << this->human[i].get_index() << std::setw(10) << '|';
		print_promt(this->human[i].get_fname());
		print_promt(this->human[i].get_lastname());
		print_promt(this->human[i].get_nickname());
		std::cout << std::endl;
	}
	if (this->member_count > 0)
	{
		for(;;)
		{
			std::cout << "Please, enter preferable contact's index" << std::endl;
			std::cin >> index;
			if (index.size() > 1)
				std::cout << "Unknown index, please type again or type 9 to exit" << std::endl;
			else
			{
				index_number = atoi(index.c_str());
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

void	phone_book::add()
{
	std::string	input;

	this->human[this->member_count % 8].set_index(this->member_count % 8 + 1);
	std::cout << "Please, enter first name" << std::endl;
	std::cin >> input;
	this->human[this->member_count % 8].set_first_name(input);

	std::cout << "Please, enter last name" << std:: endl;
	std::cin >> input;
	this->human[this->member_count % 8].set_last_name(input);

	std::cout << "Please, enter nickname" << std:: endl;
	std::cin >> input;
	this->human[this->member_count % 8].set_nickname(input);

	std::cout << "Please, enter phone number" << std:: endl;
	std::cin >> input;
	this->human[this->member_count % 8].set_phone_number(input);

	std::cout
		<< "Please, enter member's darkest secret, I will not tell anyone"
			<< std:: endl;
	std::cin >> input;
	this->human[this->member_count % 8].set_ds(input);
}

int	phone_book::get_count()
{
	return (member_count);
}

int	phone_book::set_count(int number)
{
	member_count = number;
	return (member_count);
}

int	phone_book::iterate_counter()
{
	member_count += 1;
	return (member_count);
}

int	phone_book::iterate_size()
{
	max_size += 1;
	return (max_size);
}

int	phone_book::set_max_size(int number)
{
	max_size = number;
	return (max_size);
}

int	phone_book::get_max_size()
{
	return (max_size);
}
