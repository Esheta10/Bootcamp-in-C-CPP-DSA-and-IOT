//7. Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n- ");
    scanf("%d",&n);
    printf("first %d even natural numbers in reverse order are ",n);
    for(i=n;i>=1;i--)
    {
        if(i%2==0)
            printf("%d ",i);
    }
    return 0;
}