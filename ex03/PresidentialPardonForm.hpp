#ifndef PresidentialPardonForm_hpp
# define PresidentialPardonForm_hpp
# include "Form.hpp"
# include <string>
# include <fstream>

class PresidentialPardonForm : public Form {

	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& other);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm&	operator =(const PresidentialPardonForm& other);
		void execute(const Bureaucrat& executor) const;

	private:

};

#endif
