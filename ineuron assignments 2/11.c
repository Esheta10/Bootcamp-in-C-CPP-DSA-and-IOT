//Write a program to input a number from the user and also input a digit. Append a
//digit in the number and print the resulting number. (Example - number=234 and
//digit=9 then the resulting number is 2349)
#include<stdio.h>
int main()
{
    int x=234;
    int n=9;
    x=x*10+n;
    printf("%d",x);
    return 0;
}