//4. Write a recursive function to print first N odd natural numbers in reverse order.
#include<stdio.h>
void odd_reverse(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("first N-%d odd natural numbers in reverse order are: ",n);
    odd_reverse(n);
    return 0;
}
void odd_reverse(int n)
{
    if(n==0)
        return;
    printf("%d ",2*n-1);
    odd_reverse(n-1);
}
/*OUTPUT-
Enter a number: 10
first N-10 odd natural numbers in reverse order are: 19 17 15 13 11 9 7 5 3 1
*/