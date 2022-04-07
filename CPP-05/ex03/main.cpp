#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
int main()
{
	Bureaucrat Director("Jim", 1);
	Bureaucrat Manager("Ryan", 50);

	Intern Sophy;
	Form *newForm = NULL;
	try
	{
		Sophy.makeForm("shit", "crap");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	if (newForm)
		delete newForm;

	try
	{
		newForm = Sophy.makeForm("shruberry creation", "home");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	if (newForm)
		delete newForm;

	try
	{
		newForm = Sophy.makeForm("shruberry creation", "home");
		newForm->beSigned(Director);
		Director.executeForm(*newForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	if (newForm)
		delete newForm;

	try
	{
		newForm = Sophy.makeForm("robotomy request", "paper bag");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	if (newForm)
		delete newForm;

	try
	{
		newForm = Sophy.makeForm("presidential pardon", "me");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	if (newForm)
		delete newForm;	
	return (0);
}