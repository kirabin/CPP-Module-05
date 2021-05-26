NAME	=	a.out
COMPILER=	clang++
FLAGS	=	-Wall -Wextra -Werror
SRC		=	Bureaucrat.cpp main.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
INC		=	Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp
OBJ		=	$(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(INC)
	$(COMPILER) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(COMPILER) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f */*.o
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
