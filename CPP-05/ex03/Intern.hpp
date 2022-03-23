#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"

class Intern
{
	private:
		Form *makeShrubbery( std::string target);
		Form *makeRobot( std::string target);
		Form *makePresidential( std::string target);
	public:
		Intern();
		virtual ~Intern();
		Intern( Intern const &other );
		Intern & operator=( Intern const &other );

		Form *makeForm( std::string formToMake, std::string targetToApply );

		class UnknownForm : public std::exception
		{
			const char *what() const throw();
		};


};

typedef Form* (Intern::*Memberfunction)( std::string target );



#endif