//2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int smallest(int[],int);
int main()
{
    int n;
    printf("Enter the number of elements to be present in array: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Smallest number in array is:%d",smallest(a,n));
}
int smallest(int b[],int n)
{
    int min=999999;
    for(int i=0;i<n;i++)
    {
        if(min>b[i])
            min=b[i];
    }
    return min;
}
/*OUTPUT-
Enter the number of elements to be present in array: 5
Enter the array elements: 87 12 45 90 46 
Smallest number in array is:12
*/