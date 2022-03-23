#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	std::cout << "Intern arrived" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern dissapeared" << std::endl;
}

Intern::Intern( Intern const &other )
{
	*this = other;
}

Intern & Intern::operator=( Intern const & )
{
	return(*this);
}

const char *Intern::UnknownForm::what() const throw()
{
	return ("Unknown form!");
}

Form *Intern::makeForm( std::string formToMake, std::string targetToApply )
{
	Form *newForm;
	Memberfunction mf[3] = {&Intern::makeShrubbery, &Intern::makeRobot, &Intern::makePresidential};
	std::string formName[3] = { "shruberry creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (!formToMake.compare(formName[i]))
		{
			newForm = (this->*mf[i])(targetToApply);
			return (newForm);
		}
	}
	std::cerr << "Can't create form because ";
	throw(Intern::UnknownForm());
	return(NULL);
}

Form *Intern::makeShrubbery( std::string target )
{
	ShrubberyCreationForm *newForm = new ShrubberyCreationForm(target);
	return (newForm);
}

Form *Intern::makeRobot( std::string target )
{
	RobotomyRequestForm *newForm = new RobotomyRequestForm(target);
	return (newForm);
}

Form *Intern::makePresidential( std::string target )
{
	PresidentialPardonForm *newForm = new PresidentialPardonForm(target);
	return (newForm);
}
