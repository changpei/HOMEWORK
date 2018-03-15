#include <stdio.h>
#include <unistd.h>

int my_compute_factorial_rec(int nb);

int my_compute_factorial_rec(int nb)
{
    if(nb < 0)
        return 0;
    
    if (nb == 0)
        return 1;

    return nb * my_compute_factorial_rec(nb - 1);
}

