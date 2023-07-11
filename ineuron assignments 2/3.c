//3.Write a program to swap values of two int variables.
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Before swapping, the numbers are: ");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping,the numbers are %d and %d",a,b);
    return 0;
}