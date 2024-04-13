//9. Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter the array elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements in reverse order are: ");
    for(i=4;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
/*OUTPUT-
Enter the array elements:1 2 3 4 5
Array elements in reverse order are: 5 4 3 2 1 
*/