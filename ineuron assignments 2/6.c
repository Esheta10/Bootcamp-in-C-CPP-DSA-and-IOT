//6.Write a program which takes a character as an input and displays its ASCII code.
#include<stdio.h>
int main()
{
    char c;
    int n;
    printf("Enter a character: ");
    scanf("%c",&c);
    n=c;
    printf("The ASCII code for the character %c is %d",c,n);
    return 0;
}