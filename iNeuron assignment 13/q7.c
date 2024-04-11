//7. Write a recursive function to calculate HCF of two numbers.
#include<stdio.h>
int hcf(int,int);
int main()
{
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    printf("hcf of %d and %d is %d",a,b,hcf(a,b));
    return 0;
}
int hcf(int a, int b)
{
    int result;
    if(b==0)
        return a;
    result=hcf(b,a%b);
    return result;
}
/*OUTPUT-
Enter 2 numbers: 492 248
hcf of 492 and 248 is 4
*/