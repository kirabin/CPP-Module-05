#include "Form.hpp"

const int Form::_highest_grade = 1;
const int Form::_lowest_grade = 150;

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) :
	_name(name), _is_signed(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute) {
	_is_allowed_grade(grade_to_execute);
	_is_allowed_grade(grade_to_sign);
}

Form::Form(const Form& other) :
	_is_signed(other._is_signed), _grade_to_sign(other._grade_to_sign), _grade_to_execute(other._grade_to_execute) {
	*this = other;
}

Form::~Form() {}

Form& Form::operator =(const Form& other) {
	this->_is_signed = other._is_signed;
	return *this;
}

std::ostream& operator <<(std::ostream& out, const Form& form) {
	std::cout << "Form "<< form.getName() << ",\ngrade to sign: " << form.getGradeToSign() << std::endl;
	std::cout << "grade to execute: " << form.getGradeToExecute() << std::endl;
	std::cout << "is signed: " << form.getIsSigned() << std::endl;
	return out;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

const char* Form::IsNotSignedException::what() const throw() {
	return "Form is not signed";
}

std::string Form::getName() const {
	return this->_name;
}

bool Form::getIsSigned() const {
	return this->_is_signed;
}

int Form::getGradeToSign() const {
	return this->_grade_to_sign;
}

int Form::getGradeToExecute() const {
	return this->_grade_to_execute;
}

bool Form::_is_allowed_grade(int grade) {
	if (grade < _highest_grade) {
		throw Form::GradeTooHighException();
		// Note: code after throw is not executed
	} else if (grade > _lowest_grade) {
		throw Form::GradeTooLowException();
	}
	return (true);
}

bool Form::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= this->_grade_to_sign) {
		this->_is_signed = true;
	} else {
		throw Form::GradeTooLowException();
	}
	return (true);
}

void Form::execute(const Bureaucrat& executor) const {
	if (executor.getGrade() > this->_grade_to_execute) {
		throw Form::GradeTooLowException();
	} else if (!this->_is_signed) {
		throw Form::IsNotSignedException();
	}
}
