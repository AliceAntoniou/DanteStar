##
## EPITECH PROJECT, 2020
## test
## File description:
## test
##

SRC     =	my_show_word_array.c	\
			my_putchar.c	\
			my_putstr.c	\
			my_reader.c

OBJ     =       $(SRC:.c=.o)

NAME    =       libmy.a

CFLAGS	=	-Wall -Wextra -Werror

CPPFLAGS	=	-Iinclude

all:    $(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a $(OBJ)
	cp libmy.a ../

clean:
	rm -f $(NAME)

fclean:	clean
	rm -f $(OBJ)
	rm -f ../$(NAME)

re:	fclean	all

.PHONY: all clean fclean re