//10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>
int factorial(int);
int sum_of_series(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of the series: %d ",sum_of_series(n));
}
int factorial(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int sum_of_series(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+(factorial(i)/i);
    }
    return sum;
}
/*OUTPUT-
Enter a number: 5
Sum of the series: 34
*/