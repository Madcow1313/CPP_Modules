#include <iostream>
#include <fstream>

/*error somewhere in insert*/
std::string	ft_replace( std::string full_string, std::string old_str, std::string new_str )
{
	size_t len = strlen(old_str.c_str());
	size_t	start = full_string.find(old_str.c_str(), 0, len);
	
	//std::cout << old_str << std::endl;
	while(start != std::string::npos)
	{
		full_string.erase(start, old_str.length());
		//std::cout << full_string << std::endl;
		full_string.insert(start, new_str);
		start = start + len;
		start = full_string.find(old_str.c_str(), start, len);
		//std::cout << full_string << std::endl;
	}
	//std::cout << new_str;
	return(full_string);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error! Wrong number of arguments!"
			<< std::endl;
		return (1);
	}

	std::ifstream	infile(argv[1]);
	if (!infile.is_open())
	{
		std::cout << "Error! Can't open file!"
			<< std::endl;
			return (1);
	}

	std::string		filename  = argv[1];
	filename.append(".replace");
	std::ofstream	outfile(filename.c_str());
	if (!outfile.is_open())
	{
		std::cout << "Error! Can't create and open a replace file!"
			<< std::endl;
			return (1);
	}
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::string		input;
	std::string		replaced;
	while (getline(infile, input))
	{
		replaced = ft_replace(input, s1, s2);
		outfile << replaced;
		if (infile.eof())
			break;
		if (replaced.c_str())
			outfile << std::endl;
	}
	infile.close();
	outfile.close();
	return (0);
}