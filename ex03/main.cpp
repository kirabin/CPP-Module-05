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

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf->beSigned(high);
	rrf->execute(high);
	return 0;
}
