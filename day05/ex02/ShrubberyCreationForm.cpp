#include "ShrubberyCreationForm.hpp"

// Constructors & Destructor
ShrubberyCreationForm::ShrubberyCreationForm() : Form("Default Shrub", 145, 137)
{
	_target = "Default";
	std::cout << "Constructor (Default) : ShrubberyCreationForm called. (" << getName() << ")\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Classic Shrub", 145, 137)
{
	_target = target;
	std::cout << "Constructor (Classic) : ShrubberyCreationForm called. (" << getName() << ")\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & ref)
{
	_target = ref.getTarget();
	std::cout << "Constructor (Copy) : ShrubberyCreationForm called. (" << getName() << ")\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor : ShrubberyCreationForm called. (" << getName() << ")\n";
}

// Operator Overload
ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & ref)
{
	_target = ref.getTarget();
	return *this;
}

// Getters & Setters
std::string	ShrubberyCreationForm::getTarget(void) const
{
	return _target;
}

// Class Functions
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string targetFile = _target + "_shrubbery";
	std::string tree = 
	"           \\/ |    |/		\n"
    "    \\/ / \\||/  /_/___/_	\n"
    "     \\/   |/ \\/			\n"
    "_\\__\\_\\   |  /_____/_	\n"
    "       \\  | /          /	\n"
    "__ _-----`  |{,-----------~\n"
    "        \\ }{				\n"
    "         }{{				\n"
    "         }}{				\n"
    "         {{}				\n"
    "   , -=-~{ .-^- _			\n";

	if (getSigned() == false)
		throw (Form::FormNotSigned());
	else if (executor.getGrade() > getRequiredGradeToExecute())
		throw (Form::GradeTooLow());
	else
	{
		std::ofstream outFile;
		outFile.open(targetFile.c_str());
		if (!outFile.is_open())
		{
			std::cerr << "Couldn't open file." << std::endl;
			return ;
		}
		outFile << tree;
	}
}