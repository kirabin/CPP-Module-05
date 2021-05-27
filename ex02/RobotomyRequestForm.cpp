#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("rrform", 72, 45) {
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) :
	Form(other._name, other._grade_to_sign, other._grade_to_execute) {
	this->_is_signed = other._is_signed;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm&	RobotomyRequestForm::operator =(const RobotomyRequestForm& other) {
	this->_is_signed = other._is_signed;
	return *this;
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const {
	Form::execute(executor);
	std::cout << "VJJJJJJJJ..." << std::endl;
	if (rand() % 2) {
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	} else {
		std::cout << this->_target << " is a failure" << std::endl;
	}
}
