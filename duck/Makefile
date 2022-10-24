##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile to build all the function to init
##

SRC	=	init_duck.c\

OBJ	=	$(SRC:.c=.o)

NAME	=	libduck.a

CFLAGS	+= -Wall -Wextra

all:		$(NAME)
		ar rc $(NAME) $(OBJ)
		cp duck.h ../include
		cp $(NAME) ../

$(NAME):	$(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		rm -f ../$(NAME)
		rm -f ../include/duck.h

re:		fclean all

auteur:		echo $(USER) > auteur
