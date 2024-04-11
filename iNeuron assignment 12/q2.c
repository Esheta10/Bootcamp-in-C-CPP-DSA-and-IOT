//2. Write a recursive function to print first N natural numbers in reverse order.
#include<stdio.h>
void print_reverse_natural(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("first N-%d natural numbers in reverse order are: ",n);
    print_reverse_natural(n);
    return 0;
}
void print_reverse_natural(int n)
{
    if(n==0)
        return;
    printf("%d ",n);
    print_reverse_natural(n-1);
}
/*OUTPUT-
Enter a number: 10
first N-10 natural numbers in reverse order are: 10 9 8 7 6 5 4 3 2 1 
*/