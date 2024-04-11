//5. Write a recursive function to calculate sum of digits of a given number.
#include<stdio.h>
int sum_of_digits(int);
int sum=0;
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("sum of digits of a given number is %d",sum_of_digits(n));
    return 0;
}
int sum_of_digits(int n)
{
    int rem;
    while(n>0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    return sum;
}
/*OUTPUT-
Enter a number: 678
sum of digits of a given number is 876
*/