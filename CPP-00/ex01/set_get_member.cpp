#include "phonebook.hpp"

int	Contact::get_index()
{
	return index;
}

std::string Contact::get_fname()
{
	return first_name;
}

std::string	Contact::get_lastname()
{
	return last_name;
}

std::string	Contact::get_nickname()
{
	return nickname;
}

std::string	Contact::get_phone_number()
{
	return phone_number;
}

std::string	Contact::get_ds()
{
	return darkest_secret;
}

void Contact::set_index(int out_index)
{
	index = out_index;
}

void Contact::set_first_name(std::string out_string)
{
	first_name = out_string;
}

void Contact::set_last_name(std::string out_string)
{
	last_name = out_string;
}

void Contact::set_nickname(std::string out_string)
{
	nickname = out_string;
}

void Contact::set_phone_number(std::string input)
{
	phone_number = input;
}

void Contact::set_ds(std::string out_string)
{
	darkest_secret = out_string;
}