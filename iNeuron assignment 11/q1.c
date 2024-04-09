//1. Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int lcm(int,int);
int main()
{
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("lcm of %d and %d is %d",num1,num2,lcm(num1,num2));
    return 0;
}
int lcm(int num1,int num2)
{
    for(int i=1;i<=num1*num2;i++)
    {
        if(i%num1==0 && i%num2==0)
        {
            return i;
        }
    }
}
/*OUTPUT-
Enter two numbers: 25 12
lcm of 25 and 12 is 300
*/