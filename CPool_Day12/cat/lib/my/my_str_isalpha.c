#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int my_str_isalpha ( char const * str )
{
	while(*str)
	{
		if(*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z'){
			return 0;
		}
		str++;
	}
	return 1;
}