//5.Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    if(n>99 && n<1000)
        printf("%d is a 3-digit number",n);
    else
        printf("%d is not a 3-digit number",n);
    return 0;
    
}