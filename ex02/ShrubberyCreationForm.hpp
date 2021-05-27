#ifndef ShrubberyCreationForm_hpp
# define ShrubberyCreationForm_hpp
# include "Form.hpp"
# include <string>
# include <fstream>

class ShrubberyCreationForm : public Form {

	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm&	operator =(const ShrubberyCreationForm& other);
		void execute(const Bureaucrat& executor) const;

	private:

};

#endif
