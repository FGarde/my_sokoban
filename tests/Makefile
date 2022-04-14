##
## EPITECH PROJECT, 2021
## test
## File description:
## makefile
##

SRC_TEST	=	test_NAME.c				\

NAME	=	unit_test

LDLIBS	=	-L ../lib/my -lmy

CPPFLAGS 	=	-I ../include -g

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(SRC_TEST) -o $(NAME) $(LDLIBS) $(CPPFLAGS) -lcriterion --coverage
	./unit_test

gcovr:
			gcovr --exclude tests
			gcovr --exclude tests --branches

gcovr_web:
			gcovr -r . --html $(NAME).html

clean:
	rm -f *.gcno *gcda *~ $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	clean	all
