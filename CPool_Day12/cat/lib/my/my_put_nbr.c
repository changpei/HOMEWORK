#include <unistd.h>

int my_strlen ( char const * str );
int my_putstr ( char const * str );
int my_put_nbr(int num)
{	
	if(num == -2147483648){
		my_putstr("-2147483648");
		return 0;
	}
	if(num >= 0)
	{
		if(num >= 10)
	{
		my_put_nbr(num / 10);
		num = num % 10;
	}
	if(num >= 0 && num < 10)
	{
		char res = num + '0';
		write(1,&res,1);
	}
	}
	else
	{
		char minus = '-';
		num = num * -1;
		write(1,&minus,1);
		if(num >= 10)
	{
		my_put_nbr(num / 10);
		num = num % 10;
	}
	if(num >= 0 && num < 10)
	{
		char res = num + '0';
		write(1,&res,1);
	}
	}

	return 0;
}






