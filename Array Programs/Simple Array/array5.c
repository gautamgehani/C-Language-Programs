// program for simple array upto certain value

#include<stdio.h>
int main()
{
    int i,x,a[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Enter any value - ");
    scanf("%d",&x);
    for ( i=0 ; i<=x ; i++ )
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}