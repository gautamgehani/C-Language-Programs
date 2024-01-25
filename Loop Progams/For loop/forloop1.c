// program for adding the n natural numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int x,n,sum=0;
    printf("Enter the number for adding :- ");
    scanf("%d",&x);
    for(n=0;n<=x;n++)
    {
        printf("%3d",n);
        sum=sum+n;
    }
    printf("\n Sum of %d natural number = %d",x,sum);
    getch();
}
