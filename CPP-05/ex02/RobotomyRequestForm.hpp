#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string f_target);
		~RobotomyRequestForm();
		RobotomyRequestForm( RobotomyRequestForm const &other );
		RobotomyRequestForm & operator=( RobotomyRequestForm const &other );

		void execute( Bureaucrat const &executor ) const;
};



#endif