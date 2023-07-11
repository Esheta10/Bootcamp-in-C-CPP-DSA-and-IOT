//1.Write a program to print unit digit of a given number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number- ");
    scanf("%d",&n);
    printf("Unit digit of the given number %d is %d",n,n%10);
    return 0;
}