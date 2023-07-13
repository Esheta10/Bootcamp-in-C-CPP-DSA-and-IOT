//5. Write a program to check whether two given numbers are co-prime numbers or not.
//Co-prime numbers or relatively prime numbers are those numbers that have their HCF (Highest Common Factor) as 1. 
//In other words, two numbers are co-prime if they no common factor other than 1.
//lcm*hcf=a*b
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
    if(hcf==1)
        printf("%d and %d are co-prime numbers",a,b);
    else
        printf("%d and %d are not co-prime numbers",a,b);
    return 0;
}