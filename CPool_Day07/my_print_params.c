#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
    int i;
    for(i=0; i<argc; ++i)
    {
        write(1, argv, argc);
    }
    return 0;
}
