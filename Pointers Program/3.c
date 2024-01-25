// pointers and array
#include<stdio.h>
int main()
{
    int a[10];
    int *p[10];
    p[10]=&a[10];
    {
        printf("Address of array a[] = %d\n",&a[10]);
        printf("Address of variable *p = %d",p[10]);
    }
}
