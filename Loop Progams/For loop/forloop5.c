// printing reverse of the entered value upto one and printing next to 10 in next line
#include<stdio.h>
int main()
{
    int a,n;
    printf("Enter any value of n - ");
    scanf("%5d",&n);
    for ( a=1 ; a<=n ; n-- )
    {
        printf("%5d",n);
        if(n%10==1)
        {
            printf("\n");
        }
    }
}