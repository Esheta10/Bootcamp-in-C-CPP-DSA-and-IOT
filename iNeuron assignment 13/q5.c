//5. Write a recursive function to calculate sum of digits of a given number.
#include<stdio.h>
int sum_of_digits(int);
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
    while(n>0)
        return n%10 +sum_of_digits(n/10);
}
/*OUTPUT-
Enter a number: 123456789
sum of digits of a given number is 45
*/
