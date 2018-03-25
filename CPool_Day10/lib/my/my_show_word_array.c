#include <stdio.h>
#include <stdlib.h>
int my_putstr(char *);
void my_putchar(char);
int my_show_word_array( char * const *tab )
{
	while(*tab){
		my_putstr(*tab);
		my_putchar('\n');
		tab++;
	}
	return 0;
}

