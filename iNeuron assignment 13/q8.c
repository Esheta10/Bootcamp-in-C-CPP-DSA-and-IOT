//8. Write a recursive function to print first N terms of Fibonacci series.
#include<stdio.h>
int fib(int);
int main()
{
     int n;
     printf("Enter the value of n: ");
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
        printf("%d ",fib(i));
     }     
    return 0;
}
int fib(int n)
{
    if(n==0 || n==1)
        return n;
    return fib(n-1)+fib(n-2);
}
/*OUTPUT-
Enter the value of n: 10
1 1 2 3 5 8 13 21 34 55
*/