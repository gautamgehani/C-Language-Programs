// program for sum of entered digits and count of digits
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,x,i,sum=0,count=0;
    printf("Enter any number = ");
    scanf("%d",&x);
    for(i=0 ; x>i ;)
    {
        count++;
        a=x%10;
        x=x/10;
        sum=sum+a;
    }
    printf("\nSum of digits = %d",sum);
    printf("\nCount of thr digits = %d",count);
    getch();
}