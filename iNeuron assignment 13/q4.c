//4. Write a recursive function to calculate sum of squares of first n natural numbers.
#include<stdio.h>
int sum_of_square(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("sum of squares of first %d natural numbers is %d",n,sum_of_square(n));
    return 0;
}
int sum_of_square(int n)
{
    int sum=0;
    if(n>0)
    {
        sum = n*n + sum_of_square(n-1);
    }
    return sum;
}
/*OUTPUT-
Enter a number: 10
sum of squares of first 10 natural numbers is 385
*/