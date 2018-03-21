#include <stdio.h>
int my_strncmp (const char *str1,const char *str2,int n)
{
    while (*str1 && *str2 && (*str1 == *str2) && (n--))
    {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}
