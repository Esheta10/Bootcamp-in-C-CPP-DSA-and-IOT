//7.Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.
#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf("Enter values of a,b and c ");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0)
        printf("Real and distinct");
    else if(D<0)
        printf("Imaginary");
    else
        printf("Real and equal");
    return 0;
}