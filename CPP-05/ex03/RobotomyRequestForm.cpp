#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form::Form(), target("NoTarget")
{
	
}

RobotomyRequestForm::RobotomyRequestForm( std::string f_target ) : Form::Form( "RobotomyRequestForm", 72, 45 ), target(f_target)
{
	std::cout << "Robot is created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robot is destroyed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &other ) : Form::Form( "RobotomyRequestForm", 72, 45 ), target(other.target)
{
	*this = other;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const &other )
{
	this->is_signed = other.getIsSigned();
	return(*this);
}

void RobotomyRequestForm::execute( Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->grade)
	{
		std::cerr <<  "Robotomizing failed because ";
		throw(Form::GradeTooLowException());
	}
	else if (!this->getIsSigned())
	{
		std::cerr << executor.getName() << " couldn't execute the " << this->name << " form because ";
		throw(Form::NotSigned());
	}
	std::cout << "BrrRRRrrrRRrrrrr.....DrrrrrdDD.........BOOOOM!!!!!!!!!!!" << std::endl;
	std::cout << this->target << " has been robotomized successfully 50\% of the time" << std::endl;
}