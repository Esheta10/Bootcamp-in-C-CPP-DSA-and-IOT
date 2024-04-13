//1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int greatest(int [],int);
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
    printf("Greatest number in given array is: %d",greatest(a,n));
}

int greatest(int b[],int n)
{
    int max=-999999;
    for(int i=0;i<n;i++)
    {
        if(max<b[i])
            max=b[i];
    }
    return max;
}
/*OUTPUT-
Enter the number of elements to be present in array: 5
Enter the array elements: 1 2 34 56 100
Greatest number in given array is: 100
*/