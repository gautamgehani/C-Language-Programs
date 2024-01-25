// simple pointers program
#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("Address of a variable is = %d",&a);
    printf("\nAddress stored in pointer variable p : %d",p);
    printf("\nValue of *p variable : %d",*p);
    return 0;
}
