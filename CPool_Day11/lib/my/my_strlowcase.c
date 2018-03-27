#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *my_strlowcase ( char * str )
{
	char *p = str;
	while(*p != 0)
	{
		if(*p >= 'A' && *p <= 'Z')
			*p = *p + 32;
		p++;
	}
	return str;
}

