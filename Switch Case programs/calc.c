// program for calulator in switch case program
// also can be done in if else
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float x,y,z;
    char opt;
    printf("Enter 1st number - ");
    scanf("%f",&x);
    printf("Enter 2nd number - ");
    scanf("%f",&y);
    printf("Enter any option - ");
    scanf("%c",&opt);
    {
        
        switch(opt)
        {
            case '+' : z=x+y ; break;
            case '-' : z=x-y ; break;
            case '*' : z=x*y ; break;
            case '/' : z=x/y ; break;
            default : printf("sahi se number daal na l*vde");
        }
        printf("%f %c %f = %f",x,opt,y,z);
        exit(0);
    }
}