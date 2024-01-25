// program for printing ulta whatever taken from user
#include<stdio.h>
int main()
{
    char a[100];
    int i , length=0;
    printf("Enter your name = ");
    gets(a);
    for( i=0 ; a[i]!=0 ; i++ )
    {
        length++;
    }
    for(; i>=0 ; i-- )
    {
        printf("%c",a[i]);
    }

}    