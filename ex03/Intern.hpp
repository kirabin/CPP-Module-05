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

		Form*	createPresidentialPardonForm(const std::string& target);
		Form*	createRobotomyRequestForm(const std::string& target);
		Form*	createShrubberyCreationForm(const std::string& target);

		class Map {
			public:
				Map(std::string n, Form* (*c)(const std::string& target));
				std::string name;
				Form* (*create)(const std::string&);
		};

	private:
		static const int _pairs_count;

};

#endif
