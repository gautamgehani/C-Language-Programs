// program for largest number

#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();

  printf("Enter 1st number : ");
  scanf("%d",&a);
  printf("Enter 2nd number : ");
  scanf("%d",&b);

  if(a>b)
  {
      printf("Largest value is : %d",a);
  }
  else
  {
      printf("Largest value is : %d",b);
  }
  getch();
}