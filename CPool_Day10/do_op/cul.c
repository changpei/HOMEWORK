#include "./lib/my.h"
int cul(int v1,char op,int v2)
{
	int r = 0;
	if(op == '+'){
		r = v1 + v2;
	}
	if(op == '-'){
		r = v1 - v2;
	}
    if(op == '/'){
        r = v1 / v2;
    }
	if(op == '*'){
		r = v1 * v2;
	}
	if(op == '%'){
		r = v1 % v2;
	}
	my_put_nbr(e);
	my_putchar('\n');
	return 0;
}
