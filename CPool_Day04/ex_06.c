#include <stdio.h>
void my_sort_int_array ( int *array , int size )
{
    int i, j, tmp;
    for(i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(array[i]>array[j])
            {
                tmp=array[i];
                array[i]=array[j];
                array[j]=tmp;
            }
        }
    }
}


int main(void)
{
    //task6
    printf("\ntask6:\n");
    int fff[]={2,9, 8, 1, 3, 6, 7};
    my_sort_int_array(fff,7);
    for(int i=0;i<7;i++)
    {
        printf("%d\n", fff[i]);
    }
    
    return 0;
}

