#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string b_Name, int b_Grade ) : name(b_Name), grade(b_Grade)
{
	std::cout << "Bureaucrat is coming" << std::endl;
	if (this->grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	else if (this->grade > 150)
		throw(Bureaucrat::GradeTooLowException());
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat dissapears" << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const &other )
{
	*this = other;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const &other )
{
	this->grade = other.grade;
	return(*this);
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &other)
{
	out << other.getName() << ", bureaucrat grade " << other.getGrade() << ".";
	return (out);
}

void Bureaucrat::increaseGrade()
{
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade -= 1;

}

void Bureaucrat::decreaseGrade()
{
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade += 1;

}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Too high grade!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Too low grade!");
}

void Bureaucrat::signForm( Form &otherForm)
{
	if (this->grade > otherForm.getGrade())
	{
		std::cerr << this->name << " couldn't sign the form because ";
		throw(Bureaucrat::GradeTooLowException());
	}
	otherForm.beSigned(*this);
}
