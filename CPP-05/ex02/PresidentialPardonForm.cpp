#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form::Form(), target("NoTarget")
{
}

PresidentialPardonForm::PresidentialPardonForm( std::string f_target ) : Form::Form( "PresidentialPardonForm", 72, 45 ), target(f_target)
{
	std::cout << "Presidential form created" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential form destroyed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &other )  : Form::Form( "PresidentialPardonForm", 72, 45 ), target(other.target)
{
	*this = other;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const &other )
{
	this->is_signed = other.getIsSigned();
	return(*this);
}

void PresidentialPardonForm::execute( Bureaucrat const &executor ) const
{
	if (executor.getGrade() > this->grade)
	{
		std::cerr <<  " You can't be forgiven because ";
		throw(Form::GradeTooLowException());
	}
	else if (!this->getIsSigned())
	{
		std::cerr << executor.getName() << " couldn't execute the form because";
		throw(Form::NotSigned());
	}
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}