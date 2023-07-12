//8. Write a program to print 8. Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{
    int n,i,x;
    printf("Enter the value of n- ");
    scanf("%d",&n);
    printf("squares of the first %d natural numbers are- ",n);
    for(i=1;i<=n;i++)
    {
        x=i*i;
        printf("%d ",x);
    }
    return 0;
}


