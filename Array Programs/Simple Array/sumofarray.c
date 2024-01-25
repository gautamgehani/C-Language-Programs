// program for taking two array from user and printing their sum in third array
#include<stdio.h>
int main()
{
    int a[50],b[50],c[50],x,i;
    printf("Enter the size of the arrays = ");
    scanf("%d",&x);
    printf("Enter the first array - \n");
    for ( i=1 ; i<=x ; i++ )
    {
        printf("a[%d]=",i);
        scanf("\n%d",&a[i]);
    }
    printf("Enter the second array = \n");
    for ( i=1 ; i<=x ; i++ )
    {
        printf("b[%d]=",i);
        scanf("\n%d",&b[i]);
    }
    for ( i=1 ; i<=x ; i++ )
    {
        c[i]=a[i]+b[i];
    }
    printf("Sum of arrays - ");
    for ( i=1 ; i<=x ; i++ )
    {
        printf("\nc[%d]=%d",i,c[i]);
    }
    return 0;
}