//9.Write a program to find the greatest among three given numbers. Print number once
//if the greatest number appears two or three times.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        a>c?printf("%d is big",a):printf("%d is big",c);
    }
    else
    {
        b>c?printf("%d is big",b):printf("%d is big",c);
    }
    return 0;

}