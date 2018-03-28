#include <stdio.h>
#include <unistd.h>

int my_compute_square_root(int nb)
{
	int t = nb / 2;
	if(nb == 0)
		return 0;
	if(nb == 1)
		return 1;
	if(nb == 2)
		return 0;
	while(t > 0)
	{
		if(t * t == nb)
			return t;
		if(t * t < nb)
			return 0;
		t--;
	}
}