#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int my_strncmp(char const *s1,char const *s2,int n)
{
	int i = 0;
	while(*s1 == *s2 && i < n){
		if(*s1 == 0)
			return 0;
		s1++;
		s2++;
		i++;
	}
	return (*s1) - (*s2);
}