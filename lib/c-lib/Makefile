##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

SRC	=	src/my_putchar.c \
		src/my_putstr.c \
		src/my_get_nbr.c \
		src/my_get_cnbr.c \
		src/my_get_str.c \
		src/my_get_char.c \
		src/my_put_nbr.c \
		src/my_str_to_word_arr.c \
		src/my_strcmp.c \
		src/my_strdup.c \
		src/str_cleaner.c \
		src/dec_to_binary.c \
		src/binary_to_dec.c \
		src/my_strcat.c \
		src/my_charcat.c \
		src/my_cut_str.c \
		src/my_strlen.c

OBJ	=	$(SRC:.c=.o)

CFLAGS = -I . -I ./include/

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp ./include/c_lib.h ../../include
	rm -f ./src/*.o

clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f ../../include/c_lib.h
	rm -f ./libmy.a

fclean: clean
	rm -f ../../$(NAME)
	rm -f $(NAME)

re:	fclean all
