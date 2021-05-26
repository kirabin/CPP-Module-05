#include "Bureaucrat.hpp"

// https://www.tutorialspoint.com/cplusplus/cpp_exceptions_handling.htm
int main() {
	Bureaucrat	high("High", 1);
	Bureaucrat	low("Low", 150);

	try {
		Form bur("a23a", -1, 120);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		Form bur("a23a", 2, 151);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		Form bur("as23", 2, 120);
		high.signForm(bur);
		low.signForm(bur);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
