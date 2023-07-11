//7.Write a program to find the position of first 1 in LSB.
#include<stdio.h>
#include<math.h>
int main()
{
    int n,pos;
    printf("Enter a number: ");
    scanf("%d",&n);
    pos=log2(n)+1;
    printf("pos=%d",pos);
    return 0;
}