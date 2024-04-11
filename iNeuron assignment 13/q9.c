//9. Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int count=0;
int count_digits(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Digit count of %d is %d",n,count_digits(n));
    return 0;
}
int count_digits(int n)
{
    while(n>0)
    {
        count_digits(n/10);
        count++;
        return count;
    }
}
/*OUTPUT-
Enter a number: 987654321
Digit count of 987654321 is 9
*/