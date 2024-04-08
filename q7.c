//7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
//nCr = n!/(r!*(n-r)!)
#include<stdio.h>
int combination(int,int);
int factorial(int);
int main()
{
    int n,r;
    printf("Enter the value of n and r:");
    scanf("%d%d",&n,&r);
    combination(n,r);
    printf("The number of combinations one can make from n items-%d and r selected-%d at a time is %d",n,r,combination(n,r));
    return 0;
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
int combination(int n,int r)
{
    int c;
    c=factorial(n)/(factorial(r)*factorial(n-r));
    return c;

}
/*OUTPUT-
Enter the value of n and r:10 5
The number of combinations one can make from n items-10 and r selected-5 at a time is 252
*/