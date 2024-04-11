//2. Write a recursive function to calculate sum of first N odd natural numbers.
#include<stdio.h>
int sum_oddN(int);
int main()
{
    int n,s;
    printf("Enter a number: ");
    scanf("%d",&n);
    s=sum_oddN(n);
    printf("sum of first %d odd natural numbers is %d",n,s);
    return 0;
}
int sum_oddN(int n)
{
    int sum=0;
    if(n>0)
    {
        sum=2*n-1+sum_oddN(n-1);
    }
    return sum;
}
/*OUTPUT-
Enter a number: 10 
sum of first 10 odd natural numbers is 100
*/