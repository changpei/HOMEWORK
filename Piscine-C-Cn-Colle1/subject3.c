#include <unistd.h>

void colle(int x, int y);

void my_putchar(char c)
{
    write(1, &c, 1);
}

void colle(int x, int y)
{
    if(x == 1 || y == 1)
    {
        int i, j;
        for(j = 0; j < y; ++j)
        {
            for(i = 0; i < x; ++i)
                my_putchar('B');
            my_putchar('\n');
        }
    }
    else
    {
        int i, j;
        for(j = 0; j < y; ++j)
        {
            for(i = 0; i < x; ++i)
            {
                if((j == 0 && i==0)||(j == 0 && i==x-1))
                    my_putchar('A');
                else if ((j == y-1 && i==0)||(j == y-1 && i==x-1))
                    my_putchar('C');
                else if ((j == 0)||(j == y-1)||(i==0)||(i == x-1))
                    my_putchar('B');
                else
                    my_putchar(' ');
            }
            my_putchar('\n');
        }
    }
}
