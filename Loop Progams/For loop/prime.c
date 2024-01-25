// program for determining whether the number is prime or not
#include<stdio.h>
#include<conio.h>
void main()
{
    int i, n;
    printf("Enter number : ");
    scanf("%d", &n);

    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            printf("Number is composite");
            getch();
            break;
        }
    }
    printf("Number is Prime");
    getch();
}