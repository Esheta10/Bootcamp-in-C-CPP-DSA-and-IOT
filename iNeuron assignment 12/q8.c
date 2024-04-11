//8. Write a recursive function to print binary of a given decimal number.
#include<stdio.h>
void binary(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    binary(n);
    return 0;
}
void binary(int n)
{
    if(n==0)
        return;
    binary(n>>1);
    printf("%d",n&1);
}
/*OUTPUT-
Enter a number: 10
1010
--------------------OR----------------------------
void binary(int n)
{
    if(n==0)
        return;
    binary(n/2);
    printf("%d",n%2);
}
*/