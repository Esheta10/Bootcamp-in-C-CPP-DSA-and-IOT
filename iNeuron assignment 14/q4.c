//4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int num[10],i,max=-99999;
    printf("Enter 10 numbers:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(max<num[i])
            max=num[i];
    }
    printf("Greatest of 10 numbers is %d",max);
    return 0;
}
/*OUTPUT-
Enter 10 numbers:23 56 8 91 20 18 1 34 15 78
Greatest of 10 numbers is 91
*/