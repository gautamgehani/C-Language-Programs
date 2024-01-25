// program for printing anything taken by the user 
// and also printing its length
#include<stdio.h>
int main()
{
    char a[100];
    int i , length=0;
    printf("Enter your full name = ");
    gets(a);
    for( i=0 ; a[i]!=0 ; i++ )
    {
        length++;
        printf("%c",a[i]);
    }
    puts;
    printf("\n%d",length);
}