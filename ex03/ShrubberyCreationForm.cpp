#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("scform", 25, 5) {
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) :
	Form(other._name, other._grade_to_sign, other._grade_to_execute) {
	this->_is_signed = other._is_signed;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator =(const ShrubberyCreationForm& other) {
	this->_is_signed = other._is_signed;
	return *this;
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
	Form::execute(executor);
	std::string tree = "               ,@@@@@@@,\n \
       ,,,.   ,@@@@@@/@@,  .oo8888o.\n \
    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n \
   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n \
   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n \
   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n \
   `&%\\ ` /%&'    |.|        \\ '|8'\n \
       |o       | |         | |\n \
       |.|        | |         | |\n \
    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";
	std::ofstream shrubbery_file;

	shrubbery_file.open(this->_target + "_shrubbery");
	shrubbery_file << tree;
	shrubbery_file.close();
}
