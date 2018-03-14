#include <stdio.h>


//Task 06
int my_print_comb2(void)
{
	int i,j;
	for(i = 0;i <= 99; i++)
	{
		for( j = i + 1; j <= 99; j++)
		{
			printf("%02d",i);
			printf("%s"," ");
			printf("%02d",j);
			printf("%s",",");
		}
	}
	return 0;
}

