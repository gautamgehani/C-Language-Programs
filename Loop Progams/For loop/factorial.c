// printing the factorial of the number

#include<stdio.h>
#include<conio.h>
void main()
{

    int i, fact=1, n;
    printf("Enter number : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("%3d",i);
        fact = fact*i;
    }
    printf("\nFactorial is: %d", fact);
    getch();
}