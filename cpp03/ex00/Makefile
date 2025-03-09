NAME := ClapTrap

CXX := c++

CPPFLAGS := -Wall -Wextra -Werror

LVERSION := -std=c++98

SRC := main.cpp ClapTrap.cpp

OBJ := $(SRC:cpp=o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $(LVERSION) -o $@ $^

%o: %cpp
	$(CXX) $(CPPFLAGS) $(LVERSION) -c -o $@ $<

.PHONY: clean
clean:
	$(RM) $(OBJ)

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all
