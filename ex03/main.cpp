#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// https://www.tutorialspoint.com/cplusplus/cpp_exceptions_handling.htm
int main() {
	Bureaucrat	high("High", 1);
	Bureaucrat	low("Low", 150);

	try {
		PresidentialPardonForm ppf("tarr");
		high.executeForm(ppf);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		PresidentialPardonForm ppf("tarr");
		ppf.beSigned(high);
		ppf.execute(low);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		PresidentialPardonForm ppf("garr");
		ppf.beSigned(high);
		high.executeForm(ppf);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	try {
		RobotomyRequestForm ppf("tarr");
		high.executeForm(ppf);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		RobotomyRequestForm ppf("tarr");
		ppf.beSigned(high);
		ppf.execute(low);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		RobotomyRequestForm ppf("garr");
		ppf.beSigned(high);
		high.executeForm(ppf);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		ShrubberyCreationForm ppf("tarr");
		high.executeForm(ppf);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		ShrubberyCreationForm ppf("tarr");
		ppf.beSigned(high);
		ppf.execute(low);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		ShrubberyCreationForm ppf("garr");
		ppf.beSigned(high);
		high.executeForm(ppf);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	return 0;
}
