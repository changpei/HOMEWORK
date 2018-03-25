#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int my_strcmp(const char *s1,const char *s2)
{  
    while (*(s1)==*(s2))  
    {  
        if (*s1 == '\0')  
            return 0;  
        s1++;  
        s2++;  
    }  
    if (*s1 > *s2)  
        return 1;  
    else  
        return -1; 
}//0--equal;1--s1>s2;-1--s1<s2
int my_strlen ( char const * str );
char *my_strcpy(char *dest,const char *src)
{
	char *tp = dest;
	if (dest == NULL && src == NULL)
        return NULL ;
    if (dest == src)
        return dest ;
	
    while(*dest != 0 || *src != 0) 
    {
		*dest++ = *src++;
	}
		return tp;
	return tp;
}
int my_putstring(char *ptr);
int my_getnbr(char const *str)
{
	int i = 0;
	int nbr_len = 0;
	int plus = 0;
	int minus = 0;
	int sum = 0;
	int j = 0;
	int mul = 1;
	char nbr_flag = 'n';
	char *p = malloc(sizeof(str));
	char *re = malloc(20);
	char *cp = p;
	char t;
	int line_flag = 0;
	
	p = my_strcpy(p,str);
	while (*cp)
    {  
		t = *cp;
		if((t >= '0' && t <= '9') || t == '-' || t == '+')
		{
			if(nbr_flag == 'y' && nbr_len != 0 && (t == '-' || t == '+'))
				break;
			nbr_flag = 'y';
			if(t >= '0' && t <= '9')
			{
				nbr_len++;
				if(nbr_len > 10){
					line_flag = 1;
					break;
				}
				re[i] = t;	
				i++;
			}
		}
		else
		{
			if(nbr_flag == 'y')
				break;
		}
		if(t == '+')
			plus++;
		if(t == '-')
			minus++;
		cp++;  
    }
    i = 1;
    if(nbr_len > 10)
		sum = 0;
	else
	{
		if(minus % 2 == 1 && nbr_len == 10)
			line_flag = my_strcmp(re,"2147483648");
		if(minus % 2 == 0 && nbr_len == 10)
			line_flag = my_strcmp(re,"2147483647");
		if(line_flag == 1)
			sum = 0;
		else
		{
			j = nbr_len - 1;
			while(i <= nbr_len)
			{
				sum = sum + (re[j] - '0')*mul;
				i++;
			
				mul = mul*10;
				j--;
			}
			if(minus%2 == 1)
				sum = -1*sum;
		}
	}
	return sum;
}