
char *my_strncat(char *dest,char const *src,int nb)
{
	int i = 0;
	char *p=dest;  
    while(*p) 
		p++;
    while(i < nb)  
    {  
        *p=*src;  
        p++;  
        src++;  
        i++;
    }  
    *p='\0';  
    return dest;
}
