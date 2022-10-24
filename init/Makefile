##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile to build all the function to init
##

SRC	=	init_window.c\

OBJ	=	$(SRC:.c=.o)

NAME	=	libinit.a

CFLAGS	+=	-Wall -Wextra

all:		$(NAME)
		ar rc $(NAME) $(OBJ)
		cp init.h ../include
		cp $(NAME) ../

$(NAME):	$(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		rm -f ../$(NAME)

re:		fclean all

auteur:		echo $(USER) > auteur
