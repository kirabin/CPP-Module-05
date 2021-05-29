#include "Intern.hpp"

const int Intern::_pairs_count = 3;

// Intern::Map Intern::pairs[3] = {
// 	Intern::Map::Map("President Pardon", Intern::createPresidentialPardonForm),
// 	Intern::Map::Map("President Pardon", Intern::createPresidentialPardonForm),
// 	Intern::Map::Map("President Pardon", Intern::createPresidentialPardonForm),
// 	// {"Robotomy Request", Intern::createRobotomyRequestForm},
// 	// {"Shrubbery Creation", Intern::createShrubberyCreationForm}
// }

Intern::Map::Map(std::string n, Form* (*c)(const std::string&)) {
	this->name = n;
	this->create = c;
}

Intern::Intern() {

}

Intern::Intern(const Intern& other) {
	*this = other;
}

Intern::~Intern() {}

Intern&	Intern::operator =(const Intern& other) {
	return *this;
}

Form*	Intern::makeForm(std::string form_name, std::string target) const {
	Form* form;

	std::cout << "Intern creates " << form_name << std::endl;
	// typedef to hpp
	
}


Form*	createPresidentialPardonForm(std::string& target){
	return new PresidentialPardonForm(target);
}

Form*	createRobotomyRequestForm(std::string& target) {
	return new RobotomyRequestForm(target);
}
Form*	createShrubberyCreationForm(std::string& target) {
	return new ShrubberyCreationForm(target);
}
