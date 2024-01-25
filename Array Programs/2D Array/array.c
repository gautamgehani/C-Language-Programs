// 2d array
#include<stdio.h>
int main()
{
    int a[3][2],i,j;
    printf("Enter the values in 2d array ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Print Array =%d\n",a[i][j]);
}