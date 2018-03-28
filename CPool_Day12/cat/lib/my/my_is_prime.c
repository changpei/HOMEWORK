#include <stdio.h>
#include <unistd.h>

int my_is_prime(int nb)
{
	int re = nb / 2;
	if(nb == 2)
		return 1;
	while(re > 1)
	{
		if(nb % re == 0)
			return 0;
		else
			return 1;
		re--;
	}
	return 0;
}
