//array insertion of value at run time
//also the sum and average of array
#include<stdio.h>
int main()
{
    int a[100],x,i,sum=0;
    float avg=0;
    printf("Enter the size of array = ");
    scanf("%d",&x);
    printf("Enter the marks of the students\n");
    for(i=0;i<x;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<x;i++)
    {
        sum=sum+a[i];
        avg=sum/x;
    }
    printf("sum of array = %d\n",sum);
    printf("average of array = %f",avg);
}