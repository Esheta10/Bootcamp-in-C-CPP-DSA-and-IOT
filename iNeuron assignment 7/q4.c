//4.Write a program to calculate HCF of two numbers.
// if a and b are 2 numbers then lcm*hcf=a*b
#include<stdio.h>
int main()
{
    int a,b,lcm,hcf,i;
    printf("Enter 2 numbers- ");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a*b;i++)
    {
       if((i%a==0) && (i%b==0))
            break;
    }
    lcm=i;
    hcf=(a*b)/lcm;
    printf("%d is hcf",hcf);
    return 0;   
}
