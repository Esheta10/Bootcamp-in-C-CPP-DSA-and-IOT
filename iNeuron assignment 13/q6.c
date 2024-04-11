//6. Write a recursive function to calculate factorial of a given number.
#include<stdio.h>
int factorial(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("factorial of given number %d is %d",n,factorial(n));
    return 0;
}
int factorial(int n)
{
    if(n==0)
        return 1;
    return n*factorial(n-1);
}
/*OUTPUT-
Enter a number: 5
factorial of given number 5 is 120
*/