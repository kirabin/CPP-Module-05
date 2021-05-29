#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

// https://www.tutorialspoint.com/cplusplus/cpp_exceptions_handling.htm
int main() {
	Intern  someRandomIntern;
	Form*   rrf;
	Bureaucrat high("high", 1);

	rrf = someRandomIntern.makeForm("rrform", "Bender");
	if (rrf) {
		rrf->beSigned(high);
		rrf->execute(high);
		delete rrf;
	}
	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("ppform", "Bender");
	if (rrf) {
		rrf->beSigned(high);
		rrf->execute(high);
		delete rrf;
	}
	std::cout << std::endl;
	rrf = someRandomIntern.makeForm("scform", "Bender");
	if (rrf) {
		rrf->beSigned(high);
		rrf->execute(high);
		delete rrf;
	}
	std::cout << std::endl;
	rrf = someRandomIntern.makeForm("aaaa", "Bender");
	return 0;
}
