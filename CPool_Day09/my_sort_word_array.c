#include <stdio.h>
#include <unistd.h>
int get_color(unsigned char red,unsigned char green,unsigned char blue)
{
    int color=0,R5,G6,B5;
    
    R5=(red<<11)&0xf800;
    G6=(green<<5)&0x07e0;
    B5=(blue<<3)&0x1f;
    color=R5|G6|B5;
    return color;
}
