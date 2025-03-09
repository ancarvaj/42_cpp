NAME := phonebook

CC := c++

CFLAGS := -Wall -Wextra -Werror

LVERSION := -std=c++98

SRCS := Contact.cpp main.cpp add.cpp search.cpp

OBJS := $(SRCS:cpp=o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(LVERSION) $^ -o $@

.PHONY: clean
clean:
	$(RM) $(OBJS)

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re:	fclean all
