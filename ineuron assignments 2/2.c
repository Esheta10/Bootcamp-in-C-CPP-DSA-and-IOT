//2.Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The given number %d without its last digit is %d",n,n/10);
    return 0;
}