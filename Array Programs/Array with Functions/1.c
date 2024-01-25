// passing array through the functions
// average of array
#include<stdio.h>
int average(int[],int);
void main()
{
    int a[]={40,50,52,56,60};
    float avg=0;
    int size;
    size=sizeof(a)/sizeof(a[2]);
    printf("Size of array a[] = %d\n",size);
    avg=average(a,size);
    printf("Average = %f",avg);
}
int average(int a[],int size)
{
    int i,sum=0;
    float avg;
    for(i=0;i<=size;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum is = %d\n",sum);
    avg=sum/size;
    return avg;
}
