#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <cassert>
#define SWAP(a,b,c) ((c)=(a),(a)=(b),(b)=(c))
using namespace std;

//task01
void my_strcpy(char str1[],char str2[],char str[])
{
    int i,j;
    for(i=0;str1[i]!='\0';i++)
        str[i]=str1[i];
    for(j=0;str2[j]!='\0';j++)
        str[i+j]=str2[j];
    str[i+j]='\0';
}

//task02
void my_strncpy(char *dest,const char *scr,int len)
{
    if (dest == NULL || scr == NULL)
        return;
    char *pdest = dest;
    char *pscr = (char *)scr;
    if ((scr < dest) && (dest < scr + len))  //重叠，从尾部开始复制
    {
        pdest = pdest + len - 1;
        pscr = pscr + len - 1;
        while (len--)
        {
            *pdest-- = *pscr--;
        }
    }
    else
    {
        while (len--)
        {
            *pdest++ = *pscr++;
        }
    }
}

//task03
void  my_str(char * s)
{
    char *p=s;
    char temp;
    while(*p) p++;  //让p指向最后一个字符
    p--;
    while(s<=p)
    {
        SWAP(*s,*p,temp);   //交换两个字符，宏函数实现
        s++;
        p--;
    }
}

//task04
const char* my_StrStr(const char *str1, const char *str2)
{
    assert(NULL != str1 && NULL != str2);
    
    
    while(*str1 != '\0')
    {
        const char *p = str1;
        const char *q = str2;
        const char *res = NULL;
        if(*p == *q)
        {
            res = p;
            while(*p && *q && *p++ == *q++)
                ;
            
            if(*q == '\0')
                return res;
        }
        str1++;
    }
    return NULL;
}

//task05
int strcmp(const char *str1,const char *str2)
{
    while(str1!=NULL&&str2!=NULL)
    {
        while(*str1++==*str2++)
        {
            if(*str1=='\0'&&*str2=='\0') return 1;
        }
        
        return -1; //不等的情况
    }
    
    return -2; //有指针为空的情况
}



