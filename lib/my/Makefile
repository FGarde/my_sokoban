##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile lib
##

SRC	=	my_get_nbr.c			\
		my_printf_flags_one.c 	\
		my_printf.c 			\
		my_put_nbr.c 			\
		my_putchar.c 			\
		my_putstr.c 			\
		my_putstr_error.c 		\
		my_revstr.c 			\
		my_str_cat.c 			\
		my_strcmp.c 			\
		my_strcpy.c 			\
		my_strncpy.c 			\
		my_strlen.c 			\
		my_strlowcase.c 		\
		my_strupcase.c 			\
		my_str_to_word_array.c	\
		open_map.c

OBJ	=	$(SRC:.c=.o)

NAME	= 	libmy.a

all: 	$(NAME)

$(NAME): 	$(OBJ)
	ar rc $(NAME) $(OBJ)
	mkdir -p ../../include
	cp my_lib.h ../../include
	cp $(NAME) ../../lib

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
