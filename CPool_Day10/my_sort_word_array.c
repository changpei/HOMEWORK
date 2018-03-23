#include <stdio.h>
#include <unistd.h>
void my_sort_word_array(char *arr[])
{
    char *temp=NULL;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(strcmp(arr[i], arr[j])>0)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
