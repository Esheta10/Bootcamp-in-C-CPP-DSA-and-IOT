//4. Write a program to print the first N odd natural numbers
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n- ");
    scanf("%d",&n);
    printf("first %d odd natural numbers are \n",n);
    for(i=1;i<=n;i++)
        printf("%d ",i*2-1);
    return 0;
}