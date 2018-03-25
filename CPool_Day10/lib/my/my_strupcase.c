#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *my_strupcase ( char * str )
{
	char *p = str;
	while(*p != 0)
	{
		if(*p >= 'a' && *p <= 'z')
			*p = *p - 32;
		p++;
	}
	return str;
}

