//program for square and cube of the number
#include<stdio.h>
#include<conio.h>

void main()
{
  int n,sqre,cube;
  clrscr();
  printf("Enter Number: ");
  scanf("%d",&n);

  sqre=n*n;
  cube=n*n*n;
  {
      printf("\nSquare: %d\nCube: %d",sqre,cube);
  }
  getch();
}