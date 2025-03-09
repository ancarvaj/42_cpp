NAME := Animal

CXX := c++

CPPFLAGS := -Wall -Werror -Wextra

LVERSION := -std=c++98

SRC := main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJ := $(SRC:cpp=o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $(LVERSION) -o $@ $^

.PHONY: clean
clean:
	$(RM) $(OBJ)

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all

%.o: %.cpp
	$(CXX) $(CPPFLAGS) $(LVERSION) -c -o $@ $<
