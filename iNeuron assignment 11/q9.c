//9. Write a program in C to find the square of any number using the function.
#include<stdio.h>
int square(int n);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Square of %d is %d",num,square(num));
    return 0;
}
int square(int num)
{
    return num*num;
}
/*OUTPUT-
Enter a number: 22
Square of 22 is 484
*/