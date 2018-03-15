#include <stdio.h>
#include <unistd.h>

int my_compute_power_it(int nb, int p);

int my_compute_power_it(int nb, int p)
{
    if(p <  0)
        return 0;
    if(p == 0)
        return 1;

    int res = 1;
    while(p >= 1)
    {
        res *= nb;
        p--;
    }
    return res;
}


