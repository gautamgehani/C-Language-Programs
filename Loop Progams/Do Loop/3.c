// program for printing n natural numbers and their sum

#include<stdio.h>
int main()
{
    int a=1,x,sum=0;
    printf("Enter the end value - ");
    scanf("%d",&x);
    do
    {
        printf("%4d",a);
        sum=sum+a;
        a++;
    } 
    while (a<=x);
    printf("\nSum = %d",sum);
    
}