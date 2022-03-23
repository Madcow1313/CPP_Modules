#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat Director("Jim", 1);
	Bureaucrat Manager("Ryan", 50);
	Bureaucrat Intern("Sophy", 150);

	ShrubberyCreationForm Shrub("home");
	RobotomyRequestForm Robot("Dumpster");
	PresidentialPardonForm Pres("Shame");

	try
	{
		Manager.signForm(Shrub);
		Manager.executeForm(Shrub);
	}
	catch(std::exception &err)
	{
		std::cerr << err.what() << std::endl;
	}
	try
	{
		Robot.execute(Director);
	}
	catch(std::exception &err)
	{
		std::cerr << err.what() << std::endl;
	}
	try
	{	
		Director.signForm(Robot);
		Robot.execute(Director);
	}
	catch(std::exception &err)
	{
		std::cerr << err.what() << std::endl;
	}
	try
	{
		Pres.execute(Intern);
	}
	catch(std::exception &err)
	{
		std::cerr << err.what() << std::endl;
	}

	try
	{
		Pres.beSigned(Director);
		Pres.execute(Director);
	}
	catch(std::exception &err)
	{
		std::cerr << err.what() << std::endl;
	}	
	return (0);
}