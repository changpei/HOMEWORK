#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int my_strlen(const char *str);
int my_strncmp(char const *s1,char const *s2,int n);
char *my_strstr ( char *str , char const *to_find )
{
	char *p;
	int len = my_strlen(to_find);
	while(*str++ && *to_find++){
		if(*str == *to_find){
			p = str;
			break;
		}
	}
	if(my_strncmp(p,to_find,len) == 0){
		return p;
	}
	else 
		return NULL;
}