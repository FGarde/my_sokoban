##
## EPITECH PROJECT, 2022
## Makefile for every project
## File description:
## Makefile
##

override SRC_TMP	=	main.c				\
						manage_errors.c		\
						manage_struct_map.c	\
						manage_displays.c 	\
						manage_player.c 	\
						manage_collisions_walls.c 	\
						boxes/manage_collisions_boxes.c	\
						boxes/manage_movements_boxes.c	\
						boxes/count_boxes.c	\
						manage_inputs.c 	\
						calc_map_size.c 	\

override SRC		=	$(addprefix src/, $(SRC_TMP:.c=.c))

override CPPFLAGS	+=	-Iinclude -g

override CFLAGS		+=	-W -Wall -Wextra -lncurses

override LDFLAGS	=	-Llib

override LDLIBS		=	-lmy

LIB					=	lib/libmy.a

NAME				=	my_sokoban

BUILDDIR			=	obj

override OBJ		=	$(SRC:%.c=$(BUILDDIR)/%.o)

CC					=	gcc

LD					=	$(CC)

all:				$(LIB) $(NAME)
.PHONY:	all

$(LIB):
					make -C lib/my/

$(NAME):			$(OBJ)
					$(LINK.o) $^ $(LDLIBS) $(CFLAGS) $(OUTPUT_OPTION)

.SECONDEXPANSION:
$(BUILDDIR)/%.o:	override CPPFLAGS += -MT $@ -MMD -MP -MF $(@:.o=.d)
$(BUILDDIR)/%.o:	%.c | $$(@D)/.
					$(COMPILE.c) $(OUTPUT_OPTION) $<

$(BUILDDIR)/.:
					mkdir $@

$(BUILDDIR)%/.:
					mkdir -p $@

.PRECIOUS:			$(BUILDDIR)/. $(BUILDDIR)%/.

vclean:
					$(RM) *~ *#*#* .#* vgcore.*
.PHONY:	vclean

cleanlib:
					$(RM) -r $(LIB)
.PHONY:	cleanlib

cleanhtml:
					$(RM) tests/*.html
.PHONY:	cleanhtml



clean:
					$(RM) -r $(BUILDDIR)
.PHONY:	clean

fclean:				clean
					$(RM) $(NAME)
.PHONY:	fclean

re:					fclean all
.PHONY:	re

allclean:			cleanlib fclean vclean cleanlib cleanhtml
					make -C lib/my fclean
					make -C tests/ fclean
.PHONY:	allclean

tests_run:
					make -C tests/
.PHONY:	tests_run

tests_clean:
					make -C tests/ fclean
.PHONY:	tests_clean

gcovr:
					make -C tests/ gcovr
.PHONY:	gcovr

gcovr_web:
					make -C tests/ gcovr_web
.PHONY:	gcovr_web

-include	make_tests.mk

-include	$(OBJ:.o=.d)