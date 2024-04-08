//5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void odd_natural_number(int);
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    odd_natural_number(num);
    return 0;
}
void odd_natural_number(int num)
{
    for(int i=1;i<=num;i++)
    {
        printf("%d ",2*i-1);
    }
}
/*OUTPUT-
Enter a number:20
1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 
*/