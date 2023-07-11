//17. Write a program which takes the length of the sides of a triangle as an input. Display
//whether the triangle is valid or not.
//For a triangle to be valid the sum of its 2 sides should be greater than the 3rd side i.e. a+b>c && b+c>a && a+c>b
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values of 3 sides ");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c) && (b+c>a) && (a+c>b))
        printf("valid triangle");
    else
        printf("invalid");
    return 0;
}