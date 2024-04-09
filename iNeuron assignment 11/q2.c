//2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int hcf(int,int);
int main()
{
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("hcf of %d and %d is %d",num1,num2,hcf(num1,num2));
    return 0;
}
int hcf(int num1,int num2)
{
    int min=(num1<num2) ? num1 : num2;
    for(int i=min;i>=1;i--)
    {
        if(num1%i==0 && num2%i==0)
        {
            return i;
        }
    }
}
/*OUTPUT-
Enter two numbers: 36 45
hcf of 36 and 45 is 9
*/