
char *my_strcat(char *dest,char const *src)
{
	char *p=dest;  
    while(*p) 
		p++;
    while(*src)  
    {  
        *p=*src;  
        p++;  
        src++;  
    }  
    *p='\0';  
    return dest;
}
