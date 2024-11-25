NAME = libft.a

SRC =	libft.h \
		ft_strlen.c \


CC = gcc
CFLAGS = -Wall -Wextra -Werror
objects = ft_strlen.o /

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(objects)
	ar rcs $(NAME) $(objects)

ft_strlen.o: ft_strlen.c
	$(CC) $(CFLAGS) ft_strlen.c

clean:

fclean: clean
	rm $(NAME)

re: fclean all
