
#include <stdio.h>
#include <string.h>
#include<conio.h>
 
//int xyz(*char)
int main()
{
  char str1[256], str2[256], *p, *q, length;
  //ask the user to enter two strings
  printf("Enter the first string: ");
  gets(str1);
  printf("Enter the second string: ");
  gets(str2);
  //initialize pointers
  p = str1;
  q = str2;
  
  //move to the end of first string
  while(*p!='\0')
    p++;
  //copy the second string into first string
  while(*q!='\0')
  {
    *p=*q;
    q++;
    p++;
  }
  *p='\0';
  //display the result
  printf("After the concatenation: %s ",str1);

  for(*p=0;)

  length=xyz(str1);
  printf("The lenght of the %s is - %d",str1,length);
}
int xyz(char*x)
{
    int count=0;
    while(*x!='\0')
    {
        count++;
        x++;
    }
    return count;
    
}