//6. Write a program to print the first 10 even natural numbers
//even natural numbers is given by n%2==0
#include<stdio.h>
int main()
{
    int i;
    for (i=1;i<=20;i++)
    {
        if(i%2==0)
           printf("%d\t",i);
    }
    return 0;
}     
