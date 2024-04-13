//3. Write a function to sort an array of any size. (TSRN)
#include<stdio.h>
int sort(int[],int);
int main()
{
    int n;
    printf("Enter the number of elemnts to be present in array: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Sorted array elements are: ");
    sort(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
int sort(int b[],int n)
{
    int temp;
    for(int i=0;i<=n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
}
/*OUTPUT-
Enter the number of elemnts to be present in array: 5
Enter the array elements: 9 1 4 8 2
Sorted array elements are: 1 2 4 8 9 
*/