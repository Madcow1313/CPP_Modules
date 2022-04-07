#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		const int grade;
		const int gradeToExec;
		bool is_signed;
	public:
		Form();
		Form( std::string f_Name, int f_Grade, int f_GradeToExec );
		~Form();
		Form( Form const &other );
		Form & operator=( Form const &other );
		
		std::string getName() const;
		int	getGrade() const;
		bool getIsSigned() const;
		int	getGradeToExec() const;

		void beSigned( Bureaucrat const &otherB);

		class GradeTooHighException : public std::exception
		{
			const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			const char *what() const throw();
		};
		class AlreadySigned : public std::exception
		{
			const char *what() const throw();
		};
};
std::ostream &operator<<(std::ostream &out, Form const &other);

#endif