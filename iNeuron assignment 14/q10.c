//10. Write a program in C to copy the elements of one array into another array.Take array values from the user.
#include<stdio.h>
int main()
{
    int a[5],b[5],i;
    printf("Enter the array elements: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        b[i]=a[i];
    }
    printf("Copied elements into another array are: ");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}
/*OUTPUT-
Enter the array elements: 98 87 76 65 54
Copied elements into another array are: 98 87 76 65 54
*/