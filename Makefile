NAME = libft.a

SRC =	ft_strlen.c \
		ft_isalpha.c \

OBJ = $(SRC:%.c=%.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = rcs

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : libft.h $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean :
	rm $(OBJ)
	
fclean : clean
	rm $(NAME)

re : fclean all
