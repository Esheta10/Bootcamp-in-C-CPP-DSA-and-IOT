//8. Write a program in C to print or display an upper triangular matrix.
#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("Enter array elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i>j)
                a[i][j]=0;
        }
    }
    printf("Upper triangular matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
/*OUTPUT-
Enter array elements:
1 2 3
4 5 6    
7 8 9
Upper triangular matrix is:
1 2 3
0 5 6
0 0 9
*/