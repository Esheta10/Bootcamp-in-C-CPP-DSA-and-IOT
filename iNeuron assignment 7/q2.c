//2.Write a program to print first N terms of Fibonacci series.
#include<stdio.h>
int main()
{
    int f1,f2,f3,n;
    printf("Enter the value of n- ");
    scanf("%d",&n);
    f1=0;
    f2=1;
    printf("%d %d ",f1,f2);
    f3=f1+f2;
    while(f3<=n)
    {
        printf("%d ",f3);
        f1=f2;
        f2=f3;
        f3=f1+f2;
    }
    return 0;
}