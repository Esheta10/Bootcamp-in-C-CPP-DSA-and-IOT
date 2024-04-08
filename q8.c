//8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
//nPr = n!/(n-r)!
#include<stdio.h>
int permutation(int,int);
int factorial(int);
int main()
{
    int n,r;
    printf("Enter the value of n and r:");
    scanf("%d%d",&n,&r);
    permutation(n,r);
    printf("The number of arrangements one can make from n items-%d and r selected-%d at a time is %d",n,r,permutation(n,r));
    return 0;
}
int factorial(int n)
{
    int f =1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int permutation(int n,int r)
{
    int p;
    p=factorial(n)/factorial(n-r);
    return p;
}
/*OUTPUT-
Enter the value of n and r:10 5
The number of arrangements one can make from n items-10 and r selected-5 at a time is 30240*/