//5. Write a function to find the first occurrence of adjacent duplicate values in the array.
//Function has to return the value of the element.'
#include<stdio.h>
int adjacent_duplicates(int[],int);
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The first occurrence of adjacent duplicate values in the array is %d",adjacent_duplicates(a,n));
}
int adjacent_duplicates(int b[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(b[i]==b[i+1])
        {
            return b[i];
        }
    }
}
/*OUTPUT-
Enter size of array: 7
Enter array elements: 1 2 2 3 4 4 5
The first occurrence of adjacent duplicate values in the array is 2
*/