#include <stdio.h>
#include <unistd.h>

//Task 04
int my_isneg(int n)
{
    if(n > 0)
    {
        char c ='N';
        write(1, &c, 1);
        
    }
    else
    {
        char c ='P';
        write(1, &c, 1);
    }
    return 0;
}

