// printing the natural numbers  upto user value and printing after 10 in next line
#include<stdio.h>
int main()
{
    int a,n;
    printf("Enter the value = ");
    scanf("%d",&n);
    for(a=1 ; a<=n ; a++)
    {
        printf("%4d",a);
        if(a%10==0)
        {
            printf("\n");
        }
    }
    return 0;
}  