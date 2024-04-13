//3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int num[10],i,se=0,so=0;
    printf("Enter any 10 numbers: ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(num[i]%2==0)
            se=se+num[i];
        else
            so=so+num[i];
    }
    printf("Sum of all even numbers is %d",se);
    printf("\nSum of all odd numbers is %d",so);
    return 0;
}
/*OUTPUT-
Enter any 10 numbers: 10 11 12 13 14 15 16 17 18 19  
Sum of all even numbers is 70
Sum of all odd numbers is 75
*/