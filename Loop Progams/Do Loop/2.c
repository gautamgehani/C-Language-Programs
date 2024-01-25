// printing table of any number upto their value 20
// you can also change the value by taking another value
#include<stdio.h>
int main()
{
    int a=1,x;
    printf("Enter any number for table - ");
    scanf("%d",&x);
    do
    {
        printf("%d x %d = %d\n",x,a,x*a);
        a++;
    } while (a<=20);
    
}