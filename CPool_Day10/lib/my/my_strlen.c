#include <stdio.h>
#include <unistd.h>

int my_strlen ( char const * str )
{
	int n = 0;  
    while(*str++)   
    {  
        n++;      
    }  
    return n;
}
