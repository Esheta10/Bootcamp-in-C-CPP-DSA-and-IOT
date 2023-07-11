//12.Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
#include<stdio.h>
int main()
{
    float INR;
    printf("Enter the amount in INR ");
    scanf("%f",&INR);
    float dollar = (float)INR/76.23;
    printf("The amount in dollar is $%.2f",dollar);
    return 0;
}