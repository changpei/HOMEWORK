#include <stdio.h>
#include <unistd.h>
int my_putchar(char c);
int my_strlen ( char const * str );
void my_putbase(int hex,char *base)
{
	char c;
	c = base[hex];
	my_putchar(c);
}
int my_putnbr_base(int nbr, char const *base)
{
	int base_type;
	char *p = (char *)base;
	base_type = my_strlen(base);
	if(nbr < 0){
		nbr = nbr * -1;
		my_putchar('-');
	}
	if(nbr < base_type ){
		my_putbase(nbr,p);
	}
	else{
		my_putnbr_base(nbr/ base_type,base);
		nbr = nbr % base_type;
		if(nbr >= 0 && nbr < base_type)
		{
			my_putbase(nbr,p);
		}
	return 0;
	}
	return 0;
}

