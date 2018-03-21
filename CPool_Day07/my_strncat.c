#include <assert.h>
char *my_strncat(char *strDest,const char *strSrc,int i)
{
    char *start = strDest;
    assert((strDest != NULL) && (strSrc != NULL));
    while(*strDest++);
    strDest--;
    while(i--)
        if(!(*strDest++ = *strSrc++))
            return (start);
    *strDest = '\0';
    return(start);
}
