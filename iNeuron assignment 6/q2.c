//2.Write a program to calculate sum of first N even natural numbers.
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the value of n- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+2*i;
    }
    printf("sum of first %d even natural numbers is %d",n,sum);
    return 0;
}