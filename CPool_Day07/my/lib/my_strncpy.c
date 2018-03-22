#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *my_strncpy ( char *dest , char const *src, int n )
{
	char *p = dest;
	
	int i = 0;
	if (dest == NULL && src == NULL)
        return NULL ;
    if (dest == src)
        return dest ;
    while(i < n && *src != 0) 
    {
		dest[i] = src[i];
		i++;
	}
	return p;
}
