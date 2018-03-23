#include <unistd.h>
#include <stdio.h>
void my_sort_int_array ( int *array , int size )
{
    int i = 0,j = 0,temp;
    
    while(i < size - 1){
        j = 0;
        while(j < size - i - 1){
            if(array[j] > array[j + 1]){
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
            j++;
        }
        i++;
    }
    
}


