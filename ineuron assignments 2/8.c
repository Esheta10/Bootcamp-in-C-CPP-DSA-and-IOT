//8. Write a program to check whether the given number is even or odd using a bitwise operator.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n&1 == 1)
        printf("%d is an odd number",n);
    else
        printf("%d is an even number",n);
}