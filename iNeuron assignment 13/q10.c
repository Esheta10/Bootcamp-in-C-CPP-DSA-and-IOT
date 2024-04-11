//10. Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int power(int,int);
int main()
{
    int n,pow;
    printf("Enter the number and its power:");
    scanf("%d%d",&n,&pow);
    printf("Result is %d",power(n,pow));
    return 0;
}
int power(int n,int pow)
{
    int result;
    if(pow==0)
        return 1;
    result = n * power(n,pow-1);
    return result;
}
/*OUTPUT-
Enter the number and its power:4 3
Result is 64
*/