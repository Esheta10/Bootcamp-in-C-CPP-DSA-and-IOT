//1. Write a recursive function to calculate sum of first N natural numbers.
#include<stdio.h>
int sumN(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of %d natural numbers is : %d",n,sumN(n));
    return 0;
}
int sumN(int n)
{
    int sum=0;
    if(n==1)
        return 1;
    sum = n + sumN(n-1);
    return sum;
}
/*OUTPUT-
Enter a number: 5
Sum of 5 natural numbers is : 15
*/