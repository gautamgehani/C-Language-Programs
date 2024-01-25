// program for printing natural number fron 1 to n
#include<stdio.h>
int main()
{
    int a=1,x;
    printf("Enter the end value - ");
    scanf("%d",&x);
    do
    {
        printf("%4d",a);
        a++;
    } while (a<=x);
    
}