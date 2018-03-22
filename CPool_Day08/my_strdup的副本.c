#include <stdio.h>
#include <stdlib.h>
int my_putstr(char *);
int my_strlen(char const*);
char *my_strcat(char *,char const*);
char *concat_params ( int argc , char **argv )
{
    int len = 0;
    int i  = 0;
    char *re = NULL;
    while(i < argc){
        len = len + my_strlen(argv[i]);
        i++;
    }
    i = 0;
    len = len + 5;
    re = malloc(len);
    while(i < argc){
        re = my_strcat(re,argv[i]);
        if(i < argc - 1)
            re = my_strcat(re,"\n");
        if(i == argc - 1)
            re = my_strcat(re,"\0");
        i++;
    }
    return re;
}
