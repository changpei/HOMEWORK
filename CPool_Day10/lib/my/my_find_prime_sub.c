#include <stdio.h>
#include <unistd.h>
int my_is_prime(int nb);
int my_find_prime_sub(int nb)
{
	int re;
	re = nb;
	while(re++)
	{
		if(my_is_prime(re))
			return re;
	}
	return 0;
}

