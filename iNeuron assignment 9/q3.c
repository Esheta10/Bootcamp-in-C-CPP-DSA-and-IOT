//3. Write a program which takes the day number of a week and displays a unique greeting message for the day.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter your choice of day- ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("Happy Monday!");
                break;
        case 2:printf("Happy Tuesday!");
                break;
        case 3:printf("Happy Wednesday!");
                break;
        case 4:printf("Happy Thursday!");
                break;
        case 5:printf("Happy Friday!");
                break;
        case 6:printf("Happy Saturday!");
                break;
        case 7:printf("Happy Sunday!");
                break;
        default:exit(0);
    }
}