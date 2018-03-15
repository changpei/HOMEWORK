#include <stdio.h>
#include <unistd.h>
#include<math.h>

// gcc my_find_prime_sup.c -o a.out -lm

int my_is_prime(int nb);
int my_find_prime_sup(int nb);

int my_find_prime_sup(int nb)
{
    int i = nb;
    while(my_is_prime(i) == 0)
    {
        i++;
    }
    return i;
}


int my_is_prime(int nb)
{
   if(nb <= 1)
       return 0;
   if(nb == 2)
       return 1;

   int i = 2;
   double sq = sqrt(nb);

   //for(i = 2; i < nb; i++)
   for(i = 2; i < sq; i++)
       if(nb % i == 0)
           break;
   if(i < sq)
       return 0;
   return 1;
}

