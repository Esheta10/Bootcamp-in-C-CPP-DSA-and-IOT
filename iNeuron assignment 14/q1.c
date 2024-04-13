//1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum of numbers is %d",sum);
    return 0;
}
/*OUTPUT-
Enter 10 numbers: 11 22 33 44 55 66 77 88 99 110
Sum of numbers is 605
*/
