//16. Write a program to check whether a given character is an alphabet (uppercase), an
//alphabet (lower case), a digit or a special character.
  /*
        ASCII Character
        0 = 48, 9 = 57
        A = 65, Z = 90
        a = 97, z = 122
    */
#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character ");
    scanf("%c",&c);
    if(c>=65 && c<=90)
        printf("uppercase");
    else if(c>=97 && c<=122)
        printf("lowercase");
    else if(c>=48 && c<=57)
        printf("digit");
    else 
        printf("special character");
    return 0;
}