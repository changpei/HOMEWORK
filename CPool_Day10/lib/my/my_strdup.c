#include <stdlib.h>
#include <stdio.h>
int my_strlen ( char const *str );
char *my_strdup(char const *src)
{
	int len = my_strlen(src);
	int i = 0;
	char *p = malloc(len + 1);
	while(i < len){
		p[i] = src[i];
		i++;
	}
	p[i] = 0;
	return p;
}
