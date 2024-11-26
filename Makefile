NAME = libft.a

SRC =	ft_strlen.c \

OBJ = $(patsubst %.c,%.o,$(SRC))

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

AR = ar
ARFLAGS = rcs

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): libft.h $(OBJ)
	ar rcs $(NAME) $(OBJ)

ft_strlen.o: ft_strlen.c
	$(CC) $(CFLAGS) ft_strlen.c

clean:
	$(RM) $(wildcard $(OBJ))

fclean: clean
	rm $(NAME)
	rm test*

re: fclean all
