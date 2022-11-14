##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile to compile and learn csfml
##

SRC	=	main.c\

OBJ	=	$(SRC:.c=.o)

NAME	=	window

CPPFLAGS = -I./include

CFLAGS += -Wall -Wextra

all:		$(NAME)

$(NAME): LDLIBS += -lcsfml-graphics -lcsfml-system -lcsfml-window -linit -lduck
$(NAME): LDFLAGS += -L.
$(NAME):	$(OBJ)
		make -C ./init/
		make -C ./duck/
		gcc $(LDFLAGS) -o $(NAME) $(OBJ) $(LDLIBS)

clean:
		make clean -C ./init/
		make clean -C ./duck/
		rm -f $(OBJ)

fclean: 	clean
		make fclean -C ./init/
		make fclean -C ./duck/
		rm -f window

re:		fclean all
