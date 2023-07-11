//5.Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int r,n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("The sum is %d",sum);
}