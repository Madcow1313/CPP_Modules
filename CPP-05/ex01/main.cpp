#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat Director("Jim", 1);
	Bureaucrat Manager("Ryan", 50);
	Bureaucrat Intern("Sophy", 150);

	Form FirstGradeForm("Order", 1, 50);
	Form SecondGradeForm("Form 2B", 50, 150);
	Form ThirdGradeForm("Form A18", 150, 150);

	std::cout << FirstGradeForm << std::endl;
	try
	{
		Intern.signForm(FirstGradeForm);
	}
	catch (std::exception &err)
	{
		std::cerr << err.what() << std::endl;
	}
	try
	{
		Manager.signForm(SecondGradeForm);
		Manager.signForm(SecondGradeForm);
	}
	catch(std::exception &err)
	{
		std::cerr << err.what() << std::endl;
	}
	try
	{
		FirstGradeForm.beSigned(Director);
		FirstGradeForm.beSigned(Director);
	}
	catch(std::exception &err)
	{
		std::cerr << err.what() << std::endl;
	}

	std::cout << FirstGradeForm << std::endl;
	try
	{
		Form LastForm("Form Z1", 151, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}