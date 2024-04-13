//8. Write a function in C to print all unique elements in an array.
//unique-means not duplicates
#include<stdio.h>
int unique(int[],int);
int main()
{
    int n;
    printf("Enter array size:");
    scanf("%d",&n);

    int a[n];
    printf("Enter array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("All unique elements in array are:");
    unique(a,n);
}
int unique(int b[],int n)
{
    for(int i=0;i<=n-1;i++)
    {
        int count=0;
        for(int j=i+1;j<=n;j++)
        {
            if(b[i] == b[j])
                count++;
        }
        if(count==0)
        {
            printf("%d ",b[i]);
        }
    }
}
/*OUTPUT-
Enter array size:8
Enter array elements: 1 2 2 3 4 4 5 5
All unique elements in array are:1 2 3 4 5 
*/