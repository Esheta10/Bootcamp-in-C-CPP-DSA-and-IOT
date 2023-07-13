//8.Write a program to find next Prime number of a given number.
#include<stdio.h>
int main()
{
    int n,i,j,count;
    printf("Enter a number- ");
    scanf("%d",&n);
    for(i=n+1;i<=100;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
             count++;
        }
        if(count==2)
        {
         printf(" %d is the next prime number to %d",i,n);
         break;
        }
    }
    return 0;
}