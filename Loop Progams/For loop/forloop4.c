// program for adding n natural numbers and their odds and even
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,n,sum=0,sum2=0,sum3=0;
    printf("Enter the value = ");
    scanf("%d",&n);
    for (a=1 ; a<=n ; a++)
    {
        printf("%4d",a);
        sum=sum+a;
        if(a%2==0)
        {
            sum2=a+sum2;
        }
        if(a%2==1)
        {
            sum3=a+sum3;
        }
    }
    printf("\nSum of natural numbers : %d",sum);
    printf("\nSum of even numbers : %d",sum2);
    printf("\nSum of odd numbers : %d",sum3);
    getch();
}