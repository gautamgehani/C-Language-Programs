// alter alphabet in a for loop
#include<stdio.h>
int main()
{
    char alpha ;
    for (alpha='A' ; alpha<='Z' ; alpha++)
    if (alpha%2==1)
    {
        printf("%5c",alpha);
    }
    else
    {
        printf("%5c",alpha+32);
    }
    return 0;
}