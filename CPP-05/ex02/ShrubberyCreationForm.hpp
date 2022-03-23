#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm( std::string f_target );
		~ShrubberyCreationForm();
		ShrubberyCreationForm( ShrubberyCreationForm const &other );
		ShrubberyCreationForm & operator=( ShrubberyCreationForm const &other );

		void execute( Bureaucrat const &executor ) const;
};



#endif