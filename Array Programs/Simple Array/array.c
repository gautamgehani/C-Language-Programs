// printing for a simple array
#include<stdio.h>
int main()
{
    int a[5],x;
    a[0]=25;
    a[1]=50;
    a[2]=75;
    a[3]=100;
    a[4]=125;
    for(x=0;x<=4;x++)
    {
        printf("ARRAY a[%d]=%d\n",x,a[x]);
    }
}