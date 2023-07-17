/*10. C program to find all roots of a quadratic equation using switch case*/
/* ax^2+bx+c=0--->quadratic equation
d=b*b-4*a*c
case 1:(d==0)------>roots are real and equal
case 2:(d>0)------->roots are real and different
case 3:(d<0)------->roots are imaginary
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,r1,r2,d;
    printf("Enter a,b,c values- ");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    switch(d==0)
    {
        case 1:printf("Roots are real and equal");
               r1=-b/(2*a);
               r2=-b/(2*a);
               printf("\nRoots are %f and %f",r1,r2);
               break;
        case 0:switch(d>0)
        {
            case 1:printf("Roots are real and different");
                   r1=(-b+sqrt(d))/(2*a);
                   r2=(-b-sqrt(d))/(2*a);
                   printf("\nRoots are %f and %f",r1,r2);
                   break;
            case 0:printf("Roots are imaginary");
                   break;
        }
    }
    return 0;
}