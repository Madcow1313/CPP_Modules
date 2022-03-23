#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string target;
	public:
		PresidentialPardonForm( std::string f_target );
		~PresidentialPardonForm();
		PresidentialPardonForm( PresidentialPardonForm const &other );
		PresidentialPardonForm & operator=( PresidentialPardonForm const &other );

		void execute( Bureaucrat const &executor) const;
};


#endif