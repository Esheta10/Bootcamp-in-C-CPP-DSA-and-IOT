//9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include<stdio.h>
int main()
{
    int n,a[10][10],i,j,count=0;
    printf("Enter the size of the matrix:\n");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
                count++;
        }
    }
    if(count>(n*n)/2)   //if count is greater than 50% meaning the no. of zeroes are more then it is a sparse matrix else it is a dense matrix
        printf("Given matrix is a sparse matrix");
    else

        printf("Given matrix is a dense matrix");
    return 0;
}
/*OUTPUT-
Enter the size of the matrix:
3
Enter array elements:
1 0 0
0 1 0
0 0 1
Given matrix is a sparse matrix
*/