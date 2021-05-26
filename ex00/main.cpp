#include "Bureaucrat.hpp"

// https://www.tutorialspoint.com/cplusplus/cpp_exceptions_handling.htm
int main() {
	Bureaucrat	high("High", 1);
	Bureaucrat	low("Low", 150);

	try {
		Bureaucrat bur("AA", -1);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		std::cout << high;
		high.decGrade();
		std::cout << high;
		high.incGrade();
		std::cout << high;
		high.incGrade();
		std::cout << high;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		std::cout << low;
		low.incGrade();
		std::cout << low;
		low.decGrade();
		std::cout << low;
		low.decGrade();
		std::cout << low;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
