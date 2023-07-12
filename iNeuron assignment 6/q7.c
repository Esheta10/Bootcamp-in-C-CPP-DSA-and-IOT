//7.Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a number ");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;   //one by one we'll remove the digits by division and increase the count value.
        count++;
    }
    printf("Total count of digits is %d",count);  
    return 0;
}