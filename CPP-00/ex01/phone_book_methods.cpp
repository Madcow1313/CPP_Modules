#include "phonebook.hpp"

void	print_promt(std::string	string)
{
	std::string	resized_string;
	resized_string = string;
	resized_string.resize(10, ' ');
	std::cout << resized_string;
	std::cout << '|'; 
}


void	phone_book::search()
{
	print_promt("Index");
	print_promt("First name");
	print_promt("Last name");
	print_promt("Nickname");
	std::cout << std::endl;
	for (int i = 0; i < this->max_size; i++)
	{
		std::setw(10);
		std::cout << this->human[i].get_index() << '|';
		print_promt(this->human[i].get_fname());
		print_promt(this->human[i].get_lastname());
		print_promt(this->human[i].get_nickname());
		std::cout << std::endl;
	}
}

void	phone_book::add()
{
	std::string	input;

	this->human[this->member_count % 9].set_index(this->member_count % 9);
	std::cout << "Please, enter first name" << std::endl;
	std::cin >> input;
	this->human[this->member_count % 9].set_first_name(input);

	std::cout << "Please, enter last name" << std:: endl;
	std::cin >> input;
	this->human[this->member_count % 9].set_last_name(input);

	std::cout << "Please, enter nickname" << std:: endl;
	std::cin >> input;
	this->human[this->member_count % 9].set_nickname(input);

	std::cout << "Please, enter phone number" << std:: endl;
	std::cin >> input;
	this->human[this->member_count % 9].set_phone_number(input);

	std::cout
		<< "Please, enter member's darkest secret, I will not tell anyone"
			<< std:: endl;
	std::cin >> input;
	this->human[this->member_count % 9].set_ds(input);
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