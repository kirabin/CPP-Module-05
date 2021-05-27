#include "Bureaucrat.hpp"

const int Bureaucrat::_highest_grade = 1;
const int Bureaucrat::_lowest_grade = 150;

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (_is_allowed_grade(grade)) {
		this->_grade = grade;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat&	Bureaucrat::operator =(const Bureaucrat& other) {
	this->_grade = other._grade;
	return *this;
}

bool			Bureaucrat::_is_allowed_grade(int grade) {
	if (grade < _highest_grade) {
		throw Bureaucrat::GradeTooHighException();
		// Note: code after throw is not executed
	} else if (grade > _lowest_grade) {
		throw Bureaucrat::GradeTooLowException();
	}
	return (true);
}

std::string		Bureaucrat::getName() const {
	return this->_name;
}

int				Bureaucrat::getGrade() const {
	return this->_grade;
}

void			Bureaucrat::incGrade() {
	if (_is_allowed_grade(this->_grade - 1)) {
		this->_grade--;
	}
}

void			Bureaucrat::decGrade() {
	if (_is_allowed_grade(this->_grade + 1)) {
		this->_grade++;
	}
}

std::ostream&	operator <<(std::ostream& out, const Bureaucrat& character) {
	std::cout << character.getName() << ", bureaucrat grade " << character.getGrade() << std::endl;
	return out;
}

const char*		Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char*		Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

void			Bureaucrat::signForm(Form& form) {
	try {
		form.beSigned(*this);
		std::cout << this->_name << " signs " << form.getName() << std::endl;
	} catch (std::exception &e) {
		std::cout << this->_name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void			Bureaucrat::executeForm(const Form& form) {
	try {
		form.execute(*this);
		std::cout << this->_name << " executes " << form.getName() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
