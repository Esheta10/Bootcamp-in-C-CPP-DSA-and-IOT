//2. Write a program to print the first N natural numbers.
#include<stdio.h>
int main()
{
    int n=0,i;
    printf("Enter the value of n- ");
    scanf("%d",&n);
    printf("8First %d natural numbers are\n",n);
   for(i=1;i<=n;i++)
    printf("%d ",i);
   return 0;
}