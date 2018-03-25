#include <stdio.h>
#include <unistd.h>

int my_compute_power_rec(int nb, int p)
{
	int re = 1;
	if(p == 0)
		return 1;
	if(p < 0)
		return 0;
	if(p > 0)
		re = re * my_compute_power_rec(nb,p - 1);
	return re;
}
