LIB_NAME?=fun
 
all:static_library
 
static_library:
	gcc -c *.c;
	ar rc libmy.a *.o;
 
clean:
	rm -rf *.o
