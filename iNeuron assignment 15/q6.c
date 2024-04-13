//6. Write a function in C to read n number of values in an array and display it in reverse order.
#include<stdio.h>
int reverse(int[],int);
int main()
{
    int n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The reverse of array is:");
    reverse(a,n);
    return 0;
}
int reverse(int b[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",b[i]);
    }
}
/*OUTPUT-
Enter the array size: 5 
Enter the array elements: 12 23 34 45 56
The reverse of array is:56 45 34 23 12 
*/
