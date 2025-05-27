NAME = account

SOURCES = Account.cpp tests.cpp

OBJ = $(SOURCES:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

ALL: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -cpp $< -o $@

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(OBJ) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
