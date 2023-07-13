//3. Write a program to check whether a given number is there in the Fibonacci series or not.
#include<stdio.h>
int main()
{
    int f1,f2,f3,n;
    printf("Enter n- ");
    scanf("%d",&n);
    f1=0;
    f2=1;
    if(n==0)
        printf("Fibonacci number\n");
    f3=f1+f2;
    while(f3<n)
    {
        f1=f2;
        f2=f3;
        f3=f1+f2;
    }
    if(f3==n)
        printf("%d is a fibonacci number",n);
    else
        printf("%d is not a fibonacci number",n);      
    return 0;
}