#include <stdio.h>
#include <string.h>

void my_strcapitalize(char *str)
{
    int i=0;
    if(str[0]>='a' && str[0]<='z') //首字母单独判断
        str[0]=str[0]+'A'-'a';
    for(i=1;str[i];i++)
    {
        if(str[i]==' ')
        {
            if(str[i+1]>='a' && str[i+1]<='z')
                str[i+1]=str[i+1]+'A'-'a';
        }
    }
}
