#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int my_str_isprintable ( char const * str )
{
	while(*str)
	{
		if(*str < 32 || *str > 126){
			return 0;
		}
		str++;
	}
	return 1;
}

