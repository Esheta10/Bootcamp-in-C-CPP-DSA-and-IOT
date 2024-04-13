//5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int num[10],i,min=99999;
    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++)
    {
         scanf("%d",&num[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(min>num[i])
            min=num[i];
    }
    printf("Smallest number is %d",min);
    return 0;
}
/*OUTPUT-
Enter 10 numbers: 67 23 90 5 12 45 134 98 11 67
Smallest number is 5
*/