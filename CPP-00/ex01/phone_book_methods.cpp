#include "phonebook.hpp"

void	phone_book::add()
{
	std::string	input;

	this->human[this->member_count].set_index(this->member_count + 1);
	std::cout << "Please, enter first name" << std::endl;
	std::cin >> input;
	this->human[this->member_count].set_first_name(input);

	std::cout << "Please, enter last name" << std:: endl;
	std::cin >> input;
	this->human[this->member_count].set_last_name(input);

	std::cout << "Please, enter nickname" << std:: endl;
	std::cin >> input;
	this->human[this->member_count].set_nickname(input);

	std::cout << "Please, enter phone number" << std:: endl;
	std::cin >> input;
	this->human[this->member_count].set_phone_number(input);

	std::cout
		<< "Please, enter member's darkest secret, I will not tell anyone"
			<< std:: endl;
	std::cin >> input;
	this->human[this->member_count].set_ds(input);
}

void	phone_book::search()
{
	return ;
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
