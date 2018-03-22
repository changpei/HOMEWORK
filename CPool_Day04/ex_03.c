#include <stdio.h>
#include <unistd.h>

int my_strlen ( char const * str )
{
    int i = 0;
    while(*str++)
    {
        i++;
    }
    return i;
}
