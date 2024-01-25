// program for taking the size of array and printing the desire value

#include<stdio.h>
int main()
{
    int a[50],i,x;
    printf("Enter yhe size of array - ");
    scanf("%d",&x);
    printf("=a[%d]\n",x);
    for ( i=0 ; i<x ; i++ )
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for( i=0 ; i<x ; i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
}