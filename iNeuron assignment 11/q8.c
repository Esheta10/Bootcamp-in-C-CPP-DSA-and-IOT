//8. Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
int pascal(int);
int combination(int,int);
int factorial(int);
int main()
{
    int n,r,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    pascal(n);
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
int pascal(int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d ",combination(i,j));
        }
        printf("\n");
    }
}
/*OUTPUT-
Enter a number: 5
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1 
*/