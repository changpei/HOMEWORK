SRC	=	cat.c 

OBJ	=	$(SRC:.c=.o)

NAME 	=	cat

all:	$(NAME)
 
$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -L./lib/my -lmy
	
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
	rm -f *.out

re:	fclean all
