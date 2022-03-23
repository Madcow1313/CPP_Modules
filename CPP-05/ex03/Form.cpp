#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form( std::string f_Name, int f_Grade, int f_GradeToExec ) : name(f_Name), grade(f_Grade), gradeToExec(f_GradeToExec)
{
	this->is_signed = false;
	std::cout << "Form is on the desk" << std::endl;
	if (this->grade < 1)
		throw(Form::GradeTooHighException());
	else if (this->grade > 150)
		throw(Form::GradeTooLowException());
}

Form::~Form()
{
	std::cout << "Form dissapears" << std::endl;
}

Form::Form( Form const &other ) : grade(other.grade), gradeToExec(other.gradeToExec)
{
	*this = other;
}

Form & Form::operator=( Form const &other )
{
	this->is_signed = other.is_signed;
	return(*this);
}

std::string Form::getName() const
{
	return (this->name);
}

int	Form::getGrade() const
{
	return (this->grade);
}

bool Form::getIsSigned() const
{
	return (this->is_signed);
}

int	Form::getGradeToExec() const
{
	return (this->gradeToExec);
}

std::ostream &operator<<(std::ostream &out, Form const &other)
{
	out << other.getName() << ", Form grade " << other.getGrade();
	if (other.getGradeToExec())
		out << "is signed and it's grade to execute is " << other.getGradeToExec() << ".";
	else
		out << "is not signed and it's grade to execute is " << other.getGradeToExec() << ".";
	return (out);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Too high grade!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Too low grade!");
}


const char *Form::AlreadySigned::what() const throw()
{
	return ("Already signed");
}

const char *Form::NotSigned::what() const throw()
{
	return ("Form is not signed");
}

void Form::beSigned( Bureaucrat const &otherB )
{
	if (otherB.getGrade() > this->grade)
	{
		std::cerr << otherB.getName() << " couldn't sign the form because ";
		throw(Form::GradeTooLowException());
	}
	if (this->is_signed)
	{
		std::cerr << otherB.getName() << " couldn't sign the form because ";
		throw(Form::AlreadySigned());
	}
	else
	{
		this->is_signed = true;
		std::cout << otherB.getName() << " has signed " << this->name << std::endl;
	}
}
