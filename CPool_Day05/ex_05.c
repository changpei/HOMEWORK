#include <stdio.h>
#include <unistd.h>
#include<math.h>

// gcc my_compute_square_root.c -o a.out -lm

int my_compute_square_root(int nb);

int my_compute_square_root(int nb)
{
    if (nb <= 0)
        return 0;
 
    int ires = 0;
    double dres = 0;

    ires = sqrt(nb);
    dres = sqrt(nb);

    if ((double)ires == dres)
       return ires;
    return 0;
}


