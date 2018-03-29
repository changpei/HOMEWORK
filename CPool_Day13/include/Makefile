
all:static_library
 
static_library:
	gcc -c *.c
	ar rc libbtree.a *.o
	
clean:
	rm -f *.o
	
fclean:	clean
		rm -f *.a
		rm -f *.out
	
re:	fclean	all
