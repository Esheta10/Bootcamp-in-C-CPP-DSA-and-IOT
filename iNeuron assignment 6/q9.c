//9.Write a program to calculate LCM of two numbers.
// eg: lcm of 2 and 4 is 4....how?  2*1=2    4*1=4    Here,we see that 4 is the lowest common number between 2 and 4 hence least common mutiple.
//                                  2*2=4    4*2=8
//                                  2*3=8    4*3=12
//if there are 2 numbers a and b, max. range of multiplication is a*b.
//if two numbers are x and y then x*y=lcm*hcf.
#include<stdio.h>
int main()
{
    int a,b,i;
    printf ("Enter 2 numbers- ");
    scanf("%d%d",&a,&b);
    for(i=1 ; i<=a*b ; i++)
    {
        if((i%a==0) && (i%b==0))
        {
            break;
        }
    }
    printf("lcm is %d",i);
    return 0;
}