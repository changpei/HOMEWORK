#include <stdio.h>
#include <assert.h>
char *my_strcpy(char *dst,const char *src)
{
    assert(dst != NULL);
    assert(src != NULL);
    char *ret = dst;
    while((* dst++ = * src++) != '\0');
    return ret;
}
