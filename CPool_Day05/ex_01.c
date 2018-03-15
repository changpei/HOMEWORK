#include <stdio.h>
#include <unistd.h>

int my_compute_factorial_it(int nb);

int my_compute_factorial_it(int nb)
{

    if(nb < 0)
        return 0;
    
    if (nb == 0)
        return 1;

    int res = 1;

    while(nb >= 1)
    {
        res *= nb;
        nb--;
    }

    return res;
}

