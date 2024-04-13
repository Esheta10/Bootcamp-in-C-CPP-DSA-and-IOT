//7. Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
int count_duplicates(int[],int);
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Total number of duplicate elements in an array are: ");
    count_duplicates(a,n); 
}
int count_duplicates(int b[],int n)
{
    int count=0;
    for(int i=0;i<=n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(b[i]==b[j])
                count++;
        }
    }
    printf("%d",count);
}
/*OUTPUT-
Enter array size: 8
Enter array elements: 1 2 2 3 3 4 5 5
Total number of duplicate elements in an array are: 3
*/
