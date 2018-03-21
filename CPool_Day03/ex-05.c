#include <stdio.h>
#include <unistd.h>
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
                write(1,&i,1);
                write(1, &j, 1);
                write(1, &k, 1);
                if(i == 7 && j == 8 && k == 9)
                {
                    char m='/';
                    char n ='n';
                    write(1, &m, 1);
                    write(1, &n, 1);
                }
                else
                {
                    char n =',';
                    write(1, &n, 1);
                }
            }
        }
    }
    return 0;
}
