/*9. Program to Convert even number into its upper nearest odd number
Switch Statement.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number- ");
    scanf("%d",&n);
    switch(n%2==0)
    {
        case 1:n=n+1;
            printf("Nearest odd number is %d\n",n); break;
        case 0: printf("%d is an odd number itself",n); break;
    }
    return 0;
}