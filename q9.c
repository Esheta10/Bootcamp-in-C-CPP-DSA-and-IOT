//9. Write a function to check whether a given number contains a given digit or not.(TSRS)
#include<stdio.h>
int contains_digit(int,int);
int main()
{
    int num,digit;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter a digit:");
    scanf("%d",&digit);
    contains_digit(num,digit);
    return 0;
}
int contains_digit(int num,int digit)
{
    int rem;
    while(num)
    {
        rem=num%10;
        if(rem==digit)
            printf("Digit %d exists in number %d",digit,num);
        num=num/10;
    }
    return 0;
}
/*OUTPUT-
Enter a digit:5
Digit 5 exists in number 12345  
*/