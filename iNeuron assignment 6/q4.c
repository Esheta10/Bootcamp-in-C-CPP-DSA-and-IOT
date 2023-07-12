//4.Write a program to calculate sum of squares of first N natural numbers.
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of n- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+(i*i);
    printf("sum of squares of first %d natural numbers is %d",n,sum);
    return 0;
}