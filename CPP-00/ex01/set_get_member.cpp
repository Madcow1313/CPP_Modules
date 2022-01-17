#include "phonebook.hpp"

int	member::get_index()
{
	return index;
}

std::string member::get_fname()
{
	return first_name;
}

std::string	member::get_lastname()
{
	return last_name;
}

std::string	member::get_nickname()
{
	return nickname;
}

std::string	member::get_phone_number()
{
	return last_name;
}

std::string	member::get_ds()
{
	return darkest_secret;
}

int member::set_index(int out_index)
{
	index = out_index;
	return (index);
}

std::string member::set_first_name(std::string out_string)
{
	first_name = out_string;
	return (first_name);
}

std::string member::set_last_name(std::string out_string)
{
	last_name = out_string;
	return (last_name);
}

std::string member::set_nickname(std::string out_string)
{
	nickname = out_string;
	return (nickname);
}

std::string member::set_phone_number(std::string out_string)
{
	phone_number = out_string;
	return (phone_number);
}

std::string member::set_ds(std::string out_string)
{
	darkest_secret = out_string;
	return (darkest_secret);
}