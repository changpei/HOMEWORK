#include <stdio.h>

//Task 05
int my_print_comb(void)
{
	int i,j,k;
	for(i = 0;i <= 9; i++)
	{
		for( j = i + 1; j <= 9; j++)
		{
			for( k = (j > i ? j : i) + 1; k <= 9; k++)
			{
				printf("%d",i);
				printf("%d",j);
				printf("%d",k);
				if(i == 7 && j == 8 && k == 9)
				{
					printf("%s","\n");
				}
				else
				{
					printf("%s",",");
				}
			}
		}
	}
	return 0;
}
