//3. Write a recursive function to print first N odd natural numbers.
#include<stdio.h>
void odd_natural(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("first N-%d odd natural numbers are: ",n);
    odd_natural(n);
    return 0;
}
void odd_natural(int n)
{
    if(n==0)
        return;
    odd_natural(n-1);
    printf("%d ",2*n-1);
}
/*OUTPUT-
Enter a number: 10
first N-10 odd natural numbers are: 1 3 5 7 9 11 13 15 17 19   
*/