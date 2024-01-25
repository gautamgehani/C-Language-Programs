// pointers
// note ;- we can store pointer in any variable and more the also two variable
// we can also store a in p as well as q
#include<stdio.h>
void main()
{
    int a=10,b=20;
    int *p,*q;
    p=&a;
    q=&b;
    printf("\nAddress of a - %d",&a);
    printf("\nAddress of a using pointers - %d",p);
    printf("\nValue of a = %d",a);
    printf("\nValue of a using pointers - %d",*p);
    printf("\nAddress of b - %d",&b);
    printf("\nAddress of b using pointers - %d",q);
    printf("\nValue of b = %d",b);
    printf("\nValue of b using pointers - %d",*q);
}