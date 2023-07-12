//6. Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n- ");
    scanf("%d",&n);
    printf("first %d even natural numbers are  ",n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            printf("%d ",i);
    }
    return 0;
}