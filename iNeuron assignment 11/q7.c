//7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
int fib(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",fib(i));
    }
    return 0;
}
int fib(int n)
{
    if(n==1 || n==0)
        return n;
    return fib(n-1)+fib(n-2);
}
/*OUTPUT-
Enter a number: 10
1 1 2 3 5 8 13 21 34 55 
*/