#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
char *my_strcapitalize ( char * str )
{
	char *p = str;
	int wd_flag = 1;
	while(*p)
	{
		if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z')){
			if(*p >= 'a' && *p <= 'z' && wd_flag == 1){
				*p = *p - 32;
				wd_flag = 0;
			}
			else{
				if(*p >= 'A' && *p <= 'Z'){
					*p = *p + 32;
					wd_flag = 0;
				}
			}
		}
		else{
			if(*p >= '0' && *p <= '9'){
				wd_flag = 0;
			}
			else{
				wd_flag = 1;
			}
		}
		p++;
	}
	return str;
}
