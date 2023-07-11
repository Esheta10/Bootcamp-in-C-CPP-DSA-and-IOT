//1.Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number- ");
    scanf("%d",&n);
    if(n>0)
        printf("Positive");
    if(n<=0)
        printf("Non-positive");    
}