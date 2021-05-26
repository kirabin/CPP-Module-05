#ifndef Form_hpp
# define Form_hpp
# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	public:
		Form(std::string name, int grade_to_sign, int grade_to_execute);
		Form(const Form& other);
		virtual ~Form();

		Form&	operator =(const Form& other);

		class GradeTooHighException : public std::exception {
			const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			const char* what() const throw();
		};

		std::string getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		bool beSigned(const Bureaucrat& bureaucrat);

	private:
		bool _is_allowed_grade(int grade);
		const std::string _name;
		bool _is_signed;
		const int _grade_to_sign;
		const int _grade_to_execute;
		static const int _highest_grade;
		static const int _lowest_grade;
};

#endif
