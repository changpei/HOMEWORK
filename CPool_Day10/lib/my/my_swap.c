#include <unistd.h>
#include <stdio.h>
void my_swap( int *a , int *b)
{
	int t;
	t = *b;
	*b = *a;
	*a = t;
}
