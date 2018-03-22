#include <string.h>
int my_strlen(char const *str);
char *my_strcpy(char *dest,char const *src);
char * my_strdup(const char *str)
{
    char *p;
    if (!str)
        return(NULL);
    if (p = malloc(my_strlen(str) + 1))
        return(my_strcpy(p,str));
    return(NULL);
}
