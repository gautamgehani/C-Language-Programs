#include<stdio.h>
int main()
{
    char c[100];
    int i;
    printf("Enter your name = ");
    scanf("%s",&c[0]);
    for( i=0 ; c[i]!=0 ; i++)
    {
        printf("%c",c[i]);
    }
}
