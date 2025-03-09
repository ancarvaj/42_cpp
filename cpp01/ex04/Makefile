NAME := sedForLosers

CC := c++

CFLAGS  := -Wall -Wextra -Werror

LVERSION := -std=c++98

SRC := main.cpp strReplace.cpp error.cpp

OBJ := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(LVERSION) -o $@ $^

.PHONY: clean
clean:
	$(RM) $(OBJ)

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all

%.o: %.cpp
	$(CC) $(CFLAGS) $(LVERSION) -c -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) $(LVERSION) -c -o $@ $<
