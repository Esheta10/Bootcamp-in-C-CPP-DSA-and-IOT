//5. Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int n,i;
    printf ("Enter the value of n ");
    scanf("%d",&n);
    printf("first %d odd natural numbers in reverse order are \n",n);
    for(i=n;i>=1;i--)
        printf("%d ",i*2-1);
    return 0;
}