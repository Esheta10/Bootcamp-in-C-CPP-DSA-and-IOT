//3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int odd_even(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(odd_even(num))
        printf("%d is even",num);
    else
        printf("%d is odd",num);
    return 0;
}
int odd_even(int num)
{
    if(num%2==0)
        return 1;
    else 
        return 0;
}
/*
OUTPUT-
Enter a number: 29
29 is odd
Enter a number: 30
30 is even
*/