//Task 02
#include <stdio.h>
#include <unistd.h>
int my_print_revalpha(void)
{
    int i;
    for(i = 122;i >= 97; i--)
    {
        write(1, &i, 1);
    }
    return 0;
}
