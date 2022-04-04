#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iomanip>
#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat( std::string b_Name, int b_Grade );
		~Bureaucrat();
		Bureaucrat( Bureaucrat const &other );
		Bureaucrat & operator=( Bureaucrat const &other );

		std::string getName() const;
		int	getGrade() const;
		void increaseGrade();
		void decreaseGrade();
		void signForm( Form &otherForm );
		void executeForm(Form const & form);

		class GradeTooHighException : public std::exception
		{
			const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &other );


#endif