//4. Write a program to print the first 10 odd natural numbers
//odd natural numbers=i*2-1 where if i=5 the result is 9,an odd natural number.
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
        printf("%d\t",i*2-1);
    return 0;
}