// program for determining the number is positive or negative

#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  clrscr();

  printf("Enter number: ");
  scanf("%d",&n);

  if(n>0)
    printf("Number is positive");
  else if(n<0)
    printf("Number is negative");
  else
    printf("Number is Zero");

  getch();
}