//1. Write a recursive function to print first N natural numbers.
#include<stdio.h>
void printNatural(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Natural numbers are: ");
    printNatural(n);
    return 0;
}
void printNatural(int n)
{
    if(n==0)
        return;
    printNatural(n-1);
    printf("%d ",n);
}
/*OUTPUT-
Enter a number: 10
Natural numbers are: 1 2 3 4 5 6 7 8 9 10
*/