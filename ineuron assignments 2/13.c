//Write a program to take a three-digit number from the user and rotate its digits by
//one position towards the right.
#include<stdio.h>
int main()
{
    int x=312,q,r;
    r=x%10;
    q=x/10;
    x=r*100+q;
    printf("%d",x);
    return 0;
}