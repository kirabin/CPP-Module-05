#ifndef RobotomyRequestForm_hpp
# define RobotomyRequestForm_hpp
# include "Form.hpp"
# include <string>
# include <cstdlib>

class RobotomyRequestForm : public Form {

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& other);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm&	operator =(const RobotomyRequestForm& other);
		void execute(const Bureaucrat& executor) const;

	private:

};

#endif
