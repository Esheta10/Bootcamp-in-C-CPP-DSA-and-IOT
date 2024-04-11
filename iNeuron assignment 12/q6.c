//6. Write a recursive function to print first N even natural numbers in reverse order.
#include<stdio.h>
void reverse_even_natural(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("first N-%d even natural numbers in reverse order are: ",n);
    reverse_even_natural(n);
    return 0;
}
void reverse_even_natural(int n)
{
    if(n==0)
        return;
    printf("%d ",2*n);
    reverse_even_natural(n-1);
}
/*OUTPUT-
Enter a number: 5
first N-5 even natural numbers in reverse order are: 10 8 6 4 2 
*/