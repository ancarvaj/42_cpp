NAME := recap

CXX := c++

CPPFLAGS := -Wall -Werror -Wextra

LVERSION := -std=c++98

SRC := main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp

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
