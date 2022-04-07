#include "Convert.hpp"

double convert_char( std::string string )
{
	double d;

	d = static_cast<double>(string[0]);
	return (d);
}

double check_type( std::string string, int *type )
{
	std::string buffer;
	double d;
	char *end;

	d = 0;
	if (string.length() == 1)
	{
		*type = 1;
		d = convert_char(string);
		return (d);
	}
	d = strtod(string.c_str(), &end);
	buffer = end;
	if (buffer.length() == 0)
	{
		*type = 2;
		return (d);
	}
	if (buffer.length() > 0)
	{
		if (!buffer.compare("f"))
		{
			*type = 3;
			return (d);
		}
		else
		{
			*type = 0;
			return (d);
		}
	}
	return (d);
}


void check_char( double d )
{
	if (d < 127 && d > 32)
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}


int	compare_with_ascii( std::string string )
{
	std::string numbers[10] = { "0", "1", "2", "3", "4", "5", "6" "7", "8", "9"};
	for (int i = 0; i < 10; i++)
	{
		if (!numbers[i].compare(string))
			return (1);
	}
	return (0);
} 

void print_types( std::string string, double d, int type )
{
	if (type == 1)
	{
		if (compare_with_ascii( string ))
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: " << static_cast<char>(d) << std::endl;
		std::cout << "int: " << static_cast<int>(d) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
		std::cout <<  "double: " << std::fixed << static_cast<double>(d) << std::endl;
		return ;
	}
	if (type >= 2)
	{
		std::string values[6] = { "+inf", "+inff", "-inf", "-inff", "nan", "nanf" };
		for (int i = 0; i < 6; i++)
		{
			if (!string.compare(values[i]))
			{
				std::cout << "char: Impossible" << std::endl;
				std::cout << "int: Impossible" << std::endl;
				std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
				std::cout <<  "double: " << std::fixed << static_cast<double>(d) << std::endl;
				return ;
			}
		}
		check_char(d);
		if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
			std::cout << "int: " << "overflow" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(d) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<double>(d) << "f" << std::endl;
		std::cout <<  "double: " << std::fixed << std::setprecision(1) << static_cast<double>(d) << std::endl;
		return ;
	}
	std::cout << "Error! Input is not a number or character" << std::endl;
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error! Wrong number of arguments" << std::endl;
		return (0);
	}
	std::string input = argv[1];
	int	type = 0;
	double d = check_type( input, &type );
	print_types( input, d, type );
}