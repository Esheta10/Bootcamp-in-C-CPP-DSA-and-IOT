//2. Write a function to calculate simple interest.
#include<stdio.h>
float simple_interest(float,float,float);
int main()
{
    float principal,time,rate;
    printf("Enter the values for principal,time and rate of interest: ");
    scanf("%f%f%f",&principal,&time,&rate);
    printf("Simple interest is %.2f rupees",simple_interest(principal,time,rate));
    return 0;
}
float simple_interest(float principal,float time,float rate)
{
    return principal*time*rate/100;
}
/* OUTPUT-
Enter the values for principal,time and rate of interest: 12000 10 6
Simple interest is 7200.00 rupees
*/