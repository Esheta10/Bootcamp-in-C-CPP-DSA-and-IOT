//10.Write a program to reverse a given number.
//reverse of 1234 is 4321 which can be calculated by 1st taking modulo of 1234 with 10 which gives 4
//thereafter using the formula rev=rev*10+r which gives us 4(initialise rev=0 at 1st) then divide the number which gives us 123 and follow the above steps.
//rev=4*10+3=43     rev=43*10+2=432     rev=432*10+1=4321------->reverse
//n=123/10=12       n=12/10=1           n=1/10=0
#include<stdio.h>
int main()
{
    int n,rev=0,r;
    printf("Enter the number- ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("Reverse is %d",rev);
    return 0;
}