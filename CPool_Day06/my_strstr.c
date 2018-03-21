#include <stdio.h>
const char *my_strstr(const char *str, const char *sub_str)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        int tem = i; 
        int j = 0;
        while(str[i++] == sub_str[j++])
        {
            if(sub_str[j] == '\0')
            {
                return &str[tem];
            }
        }
        i = tem;
    }
    return NULL;
}
