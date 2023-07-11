//12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
    char c;
    printf("Enter an alphabet ");
    scanf("%c",&c);
    if(c>=97 && c<=122)
      printf("LOWERCASE");
    if(c>=65 && c<=90)
      printf("UPPERCASE");
    return 0;
}