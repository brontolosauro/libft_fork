NAME = libft.a

SRC =	ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c \
		ft_isascii.c ft_tolower.c ft_toupper.c ft_strlcpy.c ft_strlcat.c \
		ft_atoi.c ft_strchr.c  ft_strrchr.c ft_strncmp.c
#ft_strnstr 

OBJ = $(SRC:%.c=%.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = rcs

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : libft.h $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)
	
fclean : clean
	rm -f $(NAME)

re : fclean all

test.exe : test.c
	$(CC) $(CFLAGS) -ggdb -o $@ $< -L. libft.a 
	./$@	
