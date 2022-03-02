#include "phonebook.hpp"

int	contact::get_index()
{
	return index;
}

std::string contact::get_fname()
{
	return first_name;
}

std::string	contact::get_lastname()
{
	return last_name;
}

std::string	contact::get_nickname()
{
	return nickname;
}

int	contact::get_phone_number()
{
	return phone_number;
}

std::string	contact::get_ds()
{
	return darkest_secret;
}

int contact::set_index(int out_index)
{
	index = out_index;
	return (index);
}

std::string contact::set_first_name(std::string out_string)
{
	first_name = out_string;
	return (first_name);
}

std::string contact::set_last_name(std::string out_string)
{
	last_name = out_string;
	return (last_name);
}

std::string contact::set_nickname(std::string out_string)
{
	nickname = out_string;
	return (nickname);
}

int contact::set_phone_number(int number)
{
	phone_number = number;
	return (phone_number);
}

std::string contact::set_ds(std::string out_string)
{
	darkest_secret = out_string;
	return (darkest_secret);
}