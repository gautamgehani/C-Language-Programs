// program for printing n to 1 using dowhile loop

#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1, n;
    printf("Enter n : ");
    scanf("%d", &n);
    i=n;

    do
    {
        printf("%d\t",i);
        i--;
    } 
    while (i >= 1);
    getch();
}