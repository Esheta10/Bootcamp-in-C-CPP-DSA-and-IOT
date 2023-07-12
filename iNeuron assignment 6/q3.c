//3.Write a program to calculate sum of first N odd natural numbers.
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of n- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+(i*2-1);
    printf("sum of first %d odd natural numbers is %d",n,sum);
    return 0;
}