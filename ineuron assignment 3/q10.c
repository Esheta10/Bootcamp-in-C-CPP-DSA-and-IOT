//10.Write a program which takes the cost price and selling price of a product from the
//user. Now calculate and print profit or loss percentage.
#include<stdio.h>
int main()
{
    float CP,SP,profit,loss;
    printf("Enter CP and SP ");
    scanf("%f%f",&CP,&SP);
    if(CP<SP)
    {
        profit=((SP-CP)/CP)*100;
        printf("%.2f percent is profit",profit);
    }
    if(CP>SP)
    {
         loss=((CP-SP)/CP)*100;
         printf("%.2f percent is loss",loss);
    }
    return 0;  
}