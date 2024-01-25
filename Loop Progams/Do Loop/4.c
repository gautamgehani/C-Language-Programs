// factorial of a number using do-while loop
#include<stdio.h>
int main()
{
    int a=1,x,fact=1;
    printf("Enter any number - ");
    scanf("%d",&x);
    do
    {
        printf("%5d",a);
        fact=fact*a;
        a++;
    } while (a<=x);
    printf("\nfactorial of %d = %d",x,fact);
    
}
