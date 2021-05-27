#ifndef Bureaucrat_hpp
# define Bureaucrat_hpp

#include <string>
#include <iostream>
#include <ostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {

	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		virtual ~Bureaucrat();
		Bureaucrat& operator =(const Bureaucrat& other);

		std::string			getName() const;
		int					getGrade() const;
		void				incGrade();
		void				decGrade();
		void				signForm(Form& form);
		void				executeForm(Form const & form);

		class GradeTooHighException : public std::exception {
			const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			const char* what() const throw();
		};

	private:
		const std::string	_name;
		int					_grade;
		static const int	_highest_grade;
		static const int	_lowest_grade;

		bool				_is_allowed_grade(int grade);
};

std::ostream&	operator <<(std::ostream& out, const Bureaucrat& character);

#endif
