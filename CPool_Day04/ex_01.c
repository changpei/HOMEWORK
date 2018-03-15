#include <stdio.h> 
void my_swap(int *p,int *q);
int main(void)
{
    int a,b,*p=&a,*q=&b;
    my_swap(p,q); 
    return 0;
}
void my_swap(int *p,int *q)
{
    int temp;
    temp=*q;
    *q=*p;
    *p=temp;
}