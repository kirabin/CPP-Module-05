#ifndef Intern_hpp
# define Intern_hpp

#include <string>
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

typedef Form* (*create_f)(std::string& target);

class Intern {

	public:
		Intern();
		Intern(const Intern& other);
		virtual ~Intern();

		Intern&	operator =(const Intern& other);
		Form*	makeForm(std::string form_name, std::string target) const;

		Form*	createPresidentialPardonForm(std::string& target);
		Form*	createRobotomyRequestForm(std::string& target);
		Form*	createShrubberyCreationForm(std::string& target);
};

#endif
