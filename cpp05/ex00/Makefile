NAME:= Bureaucrat

SRC:= main.cpp Bureaucrat.cpp GradeTooLowException.cpp GradeTooHighException.cpp

OBJ:= $(SRC:cpp=o)

CXX:= c++

CXXFLAGS:= -Wall -Wextra -Werror -std=c++98

%.o: %cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

.PHONY: all
all: $(NAME)

.PHONY: clean
clean:
	$(RM) $(OBJ)

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all

