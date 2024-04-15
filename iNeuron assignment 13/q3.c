//3. Write a recursive function to calculate sum of first N even natural numbers.
#include<stdio.h>
int sum_evenN(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("sum of first %d even natural numbers is %d",n,sum_evenN(n));
    return 0;
}
int sum_evenN(int n)
{
    int sum=0;
    if(n==1)
        return 2;
    sum = 2*n + sum_evenN(n-1);
    return sum;
}
/*OUTPUT-
Enter a number: 10
sum of first 10 even natural numbers is 110
*/
