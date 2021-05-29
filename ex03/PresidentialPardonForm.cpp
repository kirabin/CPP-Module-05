#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("ppform", 145, 137) {
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :
	Form(other._name, other._grade_to_sign, other._grade_to_execute) {
	this->_is_signed = other._is_signed;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm&	PresidentialPardonForm::operator =(const PresidentialPardonForm& other) {
	this->_is_signed = other._is_signed;
	return *this;
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const {
	Form::execute(executor);
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
