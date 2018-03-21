//Task 06
#include <stdio.h>
#include <unistd.h>
int my_print_comb2(void)
{
    int i,j;
    for(i = 0;i <= 99; i++)
    {
        char c = ' ';
        char m = ',';
        for( j = i + 1; j <= 99; j++)
        {
            write(1, &i, 1);
            write(1, &c, 1);
            write(1, &j, 1);
            write(1, &m, 1);
        }
    }
    return 0;
}

