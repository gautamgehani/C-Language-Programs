// program for accepting the value by the array and printing it

#include<stdio.h>
int main()
{
    int i,a[10];
    for ( i=9 ; i>=0 ; i--)
    {
        printf("Enter any number - ");
        scanf("%d",&a[i]);
    }
    for ( i=0 ; i<=9 ; i++ )
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}