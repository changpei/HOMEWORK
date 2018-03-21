#include <stdio.h>
#include <unistd.h>

//Task 03
int my_print_digits(void)
{
	int i;
	for(i = 48;i <= 57; i++)
	{
        write(1, &i, 1);
	}
	return 0;
}

