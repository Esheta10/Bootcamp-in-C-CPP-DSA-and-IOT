//5. Write a recursive function to print first N even natural numbers.
#include<stdio.h>
void even_natural(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("first N-%d even natural numbers are: ",n);
    even_natural(n);
    return 0;
}
void even_natural(int n)
{
    if(n==0)
        return;
    even_natural(n-1);
    printf("%d ",2*n);
}
/*OUTPUT-
Enter a number: 5
first N-5 even natural numbers are: 2 4 6 8 10
*/