#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form::Form(), target("NoTarget")
{
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string f_target ) : Form::Form( "ShrubberyCreationForm", 145, 147 ), target(f_target)
{
	std::cout << "Shrubbery created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery destroyed" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &other ) : Form::Form( "ShrubberyCreationForm", 145, 147 ), target(other.target)
{
	*this = other;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const &other )
{
	this->is_signed = other.getIsSigned();
	return(*this);
}

void ShrubberyCreationForm::execute( Bureaucrat const &otherB ) const
{
	std::string filename;

	if (otherB.getGrade() > this->gradeToExec)
	{
		std::cerr << otherB.getName() << " couldn't execute the " << this->name << " form because ";
		throw(Form::GradeTooLowException());
	}
	else if (!this->getIsSigned())
	{
		std::cerr << otherB.getName() << " couldn't execute the form because";
		throw(Form::NotSigned());
	}
	filename.append(this->getName());
	filename.append("_shrubbery");
	std::ofstream outfile;
	outfile.open(filename.c_str());
	if (!outfile.is_open())
	{
		std::cerr << "File cannot be open" << std::endl;
		return ;
	}
	outfile << "           \\/ |    |/" << std::endl
			<< "        \\/ / \\||/  /_/___/_" << std::endl
			<< "         \\/   |/ \\/" << std::endl
			<< "    _\\__\\_\\   |  /_____/_" << std::endl
			<< "          \\  | /          /" << std::endl
			<< " __ _-----`  |{,-----------~" << std::endl
			<< "          \\ }{" << std::endl
			<< "           }{{" << std::endl
			<< "           }}{" << std::endl
			<< "           {{}" << std::endl
			<< "     , -=-~{ .-^- _" << std::endl;
	outfile.close();
}