// Program made by Gautam Gehani #3
#include<stdio.h>
int get_length(char*);
void concatenate(char*, char*);
int main() 
{
    char str1[256], str2[256];
    int length1, length2;
    
    printf("Enter first string : ");
    gets(str1); 

    printf("Enter second string : ");
    gets(str2); 
    
    length1 = get_length(str1);
    length2 = get_length(str2);

    printf("The length of the both string is : %d and %d \n", length1, length2);
    
    concatenate(str1, str2);
    printf("After concatenation of both strings: \n%s\n", str1);
    
    return 0;
}
 
int get_length(char*p)
{
    int count = 0;
    while (*p != '\0') 
    {
        count++;
        p++;
    }
    return count;
}

void concatenate(char*p, char*q)
{
    while(*p!='\0')
        p++;   
    while(*q!='\0')
    {
        *p=*q;
        q++;
        p++;
    }
    *p='\0';
}