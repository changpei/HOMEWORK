#include <stdio.h>
#define SWAP(a,b,c) ((c)=(a),(a)=(b),(b)=(c))

void my_revstr(char * s)
{
    char *p=s;
    char temp;
    while(*p) p++;  //让p指向最后一个字符
    p--;
    while(s<=p)
    {
        SWAP(*s,*p,temp);
        s++;
        p--;
    }
}
