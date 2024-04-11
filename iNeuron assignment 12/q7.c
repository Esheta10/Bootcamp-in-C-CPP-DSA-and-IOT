//7. Write a recursive function to print squares of first N natural numbers.
#include<stdio.h>
void square(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("squares of first N-%d natural numbers are: ",n);
    square(n);
    return 0;
}
void square(int n)
{
    if(n==0)
        return;
    square(n-1);
    printf("%d ",n*n);
}
/*OUTPUT-
Enter a number: 10
squares of first N-10 natural numbers are: 1 4 9 16 25 36 49 64 81 100 
*/