#include <stdio.h>
#include <unistd.h>

//Task 01

int my_print_alpha(void){
    int i;
    for(i = 97;i <= 122; i++)
    {
        //printf("%c", i);
        write(1, &i, 1);
    }
    return 0;
}
int main()
{
    my_print_alpha();
}
