//7. Write a program to print the first 10 even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i;
    for(i=20;i>=1;i--)
    {
        if(i%2==0)
            printf("%d\t",i);
    }
    return 0;
}